import calculator
import pytest


def test_add():
    assert calculator.add(3, 4) == 7
    assert calculator.add(-1, 1) == 0


def test_subtract():
    assert calculator.subtract(5, 3) == 2
    assert calculator.subtract(0, 1) == -1

def test_divide():
    assert calculator.divide(10, 2) == 5
    with pytest.raises(ValueError):
        calculator.divide(5, 0)


def test_multy():
    assert calculator.multy(2, 3) == 6
    assert calculator.multy(2, 9) == 18