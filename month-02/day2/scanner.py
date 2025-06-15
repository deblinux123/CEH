import socket
from IPy import IP

def resolve_target(target):
    try:
        return str(IP(target))
    except ValueError:
        return socket.gethostbyname(target)

def scan_port(target, port):
    try:
        sock = socket.socket()
        sock.settimeout(1)
        sock.connect((target, port))
        try:
            banner = sock.recv(1024).decode().strip()
        except:
            banner = "No banner"
        return (port, True, banner)
    except:
        return (port, False, None)
    finally:
        sock.close()

def scan_target(target, ports):
    ip = resolve_target(target)
    open_ports = []

    for port in ports:
        port, status, banner = scan_port(ip, port)
        if status:
            print(f"[+] Port {port} is open --> {banner}")
            open_ports.append((port, banner))
        else:
            print(f"[-] Port {port} is closed")

    return open_ports


if __name__ == "__main__":
    target = input("Enter IP or Domain: ")
    ports = [21, 22, 23, 25, 80, 443, 3306]  # مثال: پورت‌های معروف
    scan_target(target, ports)
