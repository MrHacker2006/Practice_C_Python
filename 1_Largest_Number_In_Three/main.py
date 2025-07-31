def print_largest(a , b ,c):
    if (a > b and a > c):
        print("\na is the largest among a, b and c")
    elif(b > a and b > c):
        print("\nb is the largest among a ,b and c")
    elif(c > a and c > b):
        print("\nc is the largest among a,b and c")
    elif(a == b and a > c ):
        print("\na and b are equal and they are larger than c")
    elif(a == c and a > b ):
        print("\na and c are equal and they are larger than b")
    elif(b == c and b > a ):
        print("\nc and b are equal and they are larger than a")
    else:
        print("\nAll are equal")


if __name__ == "__main__":
    a = int(input("Enter the value of a: "))
    b = int(input("Enter the value of b: "))
    c = int(input("Enter the value of c: "))

    print_largest(a, b ,c)
