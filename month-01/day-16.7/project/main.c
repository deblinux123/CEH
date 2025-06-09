#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <time.h>

#define MAX_PORT 1024

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("\033[33mUsage: %s <IP or Domain>\033[0m\n", argv[0]);
        return 1;
    }

    char *target = argv[1];
    struct sockaddr_in sa;
    struct hostent *host;
    int port;

    host = gethostbyname(target);
    if (host == NULL) {
        fprintf(stderr, "\033[31mHost not found!\033[0m\n");
        return 1;
    }

    char *ip = inet_ntoa(*(struct in_addr *)host->h_addr_list[0]);
    printf("\033[36mResolved IP:\033[0m %s\n", ip);

    // ساخت فایل لاگ خروجی
    char filename[100];
    sprintf(filename, "open_ports_%s.txt", ip);
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Failed to create log file");
        return 1;
    }

    fprintf(fp, "Open ports for %s (%s)\n", target, ip);
    fprintf(fp, "---------------------------\n");

    for (port = 1; port <= MAX_PORT; port++) {
        int sock = socket(AF_INET, SOCK_STREAM, 0);
        if (sock < 0) continue;

        sa.sin_family = AF_INET;
        sa.sin_port = htons(port);
        sa.sin_addr.s_addr = inet_addr(ip);

        struct timeval timeout;
        timeout.tv_sec = 0;
        timeout.tv_usec = 300000;
        setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, &timeout, sizeof(timeout));

        if (connect(sock, (struct sockaddr *)&sa, sizeof(sa)) == 0) {
            printf("\033[32m[+] Port %d is OPEN\033[0m\n", port);
            fprintf(fp, "Port %d is OPEN\n", port);
        }

        close(sock);
    }

    printf("\n\033[34m✅ Scan complete. Results saved in \033[1m%s\033[0m\n", filename);
    fclose(fp);

    return 0;
}
