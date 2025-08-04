def print_largest(a, b, c):
    max_val = a

    if b > max_val:
        max_val = b
    if c > max_val:
        max_val = c

    if a == b == c:
        print("All numbers are equal.")
    elif a == max_val and b == max_val and a != c:
        print("a and b are equal and larger than c.")
    elif a == max_val and c == max_val and a != b:
        print("a and c are equal and larger than b.")
    elif b == max_val and c == max_val and b != a:
        print("b and c are equal and larger than a.")
    elif a == max_val:
        print("a is the largest number.")
    elif b == max_val:
        print("b is the largest number.")
    else:
        print("c is the largest number.")

# Main part
a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))
c = int(input("Enter the value of c: "))

print_largest(a, b, c)
