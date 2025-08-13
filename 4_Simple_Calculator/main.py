def calculator(x,y):
    choice = int(input("\nEnter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\nPlease Enter Your Choice: "))
    match choice:
        case 1:
            print("\nThe Addition of a and b is: ",a+b)
        case 2:
            print("\nThe Subtraction of a and b is: ", a-b)
        case 3:
            print("\nThe Multiplication of a and b is: ", a*b)
        case 4:
            print("\nThe Division of a and b is: ", a/b)
        case _:
            print("\nPlease enter a valid choice! ")
    

if __name__ == "__main__":
    a = int(input("Enter the value of a: "))
    b = int(input("Enter the value of b: "))
    calculator(a,b)