#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void run_ping(char *domain, FILE *fp);
void run_whois(char *domain, FILE *fp);
void run_nslookup(char *domain, FILE *fp);
void run_traceroute(char *domain, FILE *fp);


void write_header(FILE *fp, char *command, char *domain);


int main()
{
	char domain[200];
	char choice[20];

	FILE *fp = fopen("result.txt", "a");

	if (fp == NULL)
	{
		printf("Failed to open file!\n");
		return 1;
	}
	printf("Enter Ip or Domain: \n");
	fgets(domain, sizeof(domain), stdin);
	domain[strcspn(domain, "\n")] = '\0';

	printf("Choose dommand (ping, whois, nslookup, traceroute): \n");
	fgets(choice, sizeof(choice), stdin);
	choice[strcspn(choice, "\n")] = '\0';

	if (strcmp(choice, "ping") == 0)
		run_ping(domain, fp);
	else if (strcmp(choice, "whois") == 0)
		run_whois(domain, fp);
	else if (strcmp(choice, "nslookup") == 0)
		run_nslookup(domain, fp);
	else if (strcmp(choice, "traceroute") == 0)
		run_traceroute(domain, fp);
	else
		printf("\033[1;31m❌ Invalid command.\033[0m\n");


	fclose(fp);
	fp = NULL;
	printf("\033[1;32m✅ Command output saved to results.txt\033[0m\n");


	return 0;
}

void write_header(FILE *fp, char *command, char *domain)
{
	time_t now = time(NULL);
	char *timestamp = ctime(&now);
	timestamp[strcspn(timestamp, "\n")] = '\0';

	fprintf(fp, "\n[%s] command: %s %s\n", timestamp, command, domain);
	fprintf(fp, "---------------------------------------------------\n");
}


void run_ping(char *domain, FILE *fp)
{
	char cmd[200];
	sprintf(cmd, "ping -c 3 %s", domain);
	write_header(fp, "ping", domain);

	FILE *out = popen(cmd, "r");

	if (out)
	{
		char buffer[256];
		while (fgets(buffer, sizeof(buffer),out))
		{
			fprintf(fp, "%s", buffer);
		}
		pclose(out);
	}

	fprintf(fp, "\n=======================================================\n");}




void run_whois(char *domain, FILE *fp)
{
	char cmd[200];
	sprintf(cmd, "whois %s", domain);
	write_header(fp, "whois", domain);

	FILE *out = popen(cmd, "r");

	if(out)
	{
		char buffer[256];
		while(fgets(buffer, sizeof(buffer), out))
		{
			fprintf(fp, "%s", buffer);
		}
		pclose(out);
	}

	fprintf(fp, "\n=======================================================\n");}


void run_nslookup(char *domain, FILE *fp)
{
	char cmd[200];
	sprintf(cmd, "nslookup %s", domain);
	write_header(fp, "nslookup", domain);

	FILE *out = popen(cmd, "r");

	if (out)
	{
		char buffer[256];
		while(fgets(buffer, sizeof(buffer), out))
		{
			fprintf(fp, "%s", buffer);
		}
		pclose(out);
	}

	fprintf(fp, "\n=======================================================\n");}



void run_traceroute(char *domain, FILE *fp)
{
	char cmd[200];
	sprintf(cmd, "traceroute %s", domain);
	write_header(fp, "traceroute", domain);

	FILE *out = popen(cmd, "r");

	if (out)
	{
		char buffer[256];
		while(fgets(buffer, sizeof(buffer), out))
		{
			fprintf(fp, "%s", buffer);
		}
		pclose(out);
	}

	fprintf(fp, "\n=======================================================\n");}












