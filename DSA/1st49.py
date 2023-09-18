s = set()
B = set()


def setA():
    n = int(input("How many elements do you want to enter? "))
    for i in range(n):
        ele = int(input("Enter element: "))
        s.add(ele)
    return s


def setB():
    p = int(input("How many elements do you want to enter? "))
    for i in range(p):
        el = int(input("Enter element: "))
        B.add(el)
    print(B)


def remove_e():
    key = int(input("Enter element you want to remove: "))
    if key in s:
        s.remove(key)
        print(s)
    else:
        print("Element not present")


def size_e():
    print(len(s))


def contain_set():
    key = int(input("Enter key to search: "))
    if key in s:
        print("Element found")
    else:
        print("Element not found")


def intersection_s():
    inter = s.intersection(B)
    if len(inter) > 0:
        print("Intersection:", inter)
    else:
        print("No intersection")


def union():
    set_AunionB = set(s)
    set_AunionB.update(B)
    print(set_AunionB)


def diff():
    set_AdiffB = set(s)
    set_AdiffB.difference_update(B)
    print(set_AdiffB)


def subset():
    print(s)
    print(B)
    if s.issubset(B):
        print("Set A is a subset of Set B")
    else:
        print("Set A is not a subset of Set B")


while True:
    print("1. Add elements to Set A")
    print("2. Add elements to Set B")
    print("3. Remove element from Set A")
    print("4. Check if an element is in Set A")
    print("5. Get the size of Set A")
    print("6. Find the intersection of Set A and Set B")
    print("7. Find the union of Set A and Set B")
    print("8. Find the difference between Set A and Set B")
    print("9. Check if Set A is a subset of Set B")

    ch = int(input("Enter your choice: "))
    if ch == 1:
        setA()
    elif ch == 2:
        setB()
    elif ch == 3:
        remove_e()
    elif ch == 4:
        contain_set()
    elif ch == 5:
        size_e()
    elif ch == 6:
        intersection_s()
    elif ch == 7:
        union()
    elif ch == 8:
        diff()
    elif ch == 9:
        subset()
    else:
        print("Invalid choice")
