import scanner
import pytest


def test_resolved_target_ip():
    assert scanner.resolve_target("8.8.8.8") == "8.8.8.8"


def test_resolved_target_domain():
    ip = scanner.resolve_target("google.com")
    assert isinstance(ip, str) and ip.count(".") == 3

def test_scan_closed_port():
    result = scanner.scan_port("google.com", 80)
    assert result[1] is True

def test_scan_target_return_list():
    result = scanner.scan_target("google.com", [20, 21, 80])
    assert isinstance(result, list)
