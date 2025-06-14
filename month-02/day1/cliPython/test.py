import my_module

def test_add():
    assert my_module.add(3, 4) == 7
    assert my_module.add(3, 2) == 5



if __name__ == "__main__":
    test_add()
    print("All Test Run with successfully.")