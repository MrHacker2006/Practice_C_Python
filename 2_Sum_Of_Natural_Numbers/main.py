def Sum_Of_N(n):
    sum = 0
    for i in range(1,n+1):
        sum = sum + i
    print(sum)


if __name__ == "__main__":
    num = int(input("Enter the number, till then you want the sum of N Natural Numbers: "))
    Sum_Of_N(num)

