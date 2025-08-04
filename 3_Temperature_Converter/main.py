def F_to_C(F):
    C = (F-32)*5/9
    print(f"The Temperature in Celsius is : {C}")

def C_to_F(C):
    F = (C*9/5)+32
    print(f"The Temperature in Fahrenheit is : {F}")

if __name__ == "__main__":
    choice=int(input("Enter 1 For Converting Fahrenheit-->Celsius\nEnter 2 for Converting Celsius-->Fahrenheit\nEnter Choice: "))

    match choice:

        case 1:
            F = float(input("Enter the Temperature in Fahrenheit for converting it into Celcius : "))
            F_to_C(F)

        case 2: 

            C = float(input("Enter the Temperature in Celsius for converting it into Fahrenheit : "))
            C_to_F(C)

        case _:
            print("Please Enter a Valid Choice!")
        

