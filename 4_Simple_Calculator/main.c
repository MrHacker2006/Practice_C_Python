#include<stdio.h>

void calculator(int x, int y)
{ 
  int choice;
  printf("Enter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\n");
  printf("Enter Your Choice: ");
  scanf("%d", &choice);
  switch(choice)
  {
    case 1:
    {   
        printf("The Addition of a and b is: ");
        printf("%d", x+y);
        break;
    }
    case 2:
    {
        printf("The Subtraction of a and b is: ");
        printf("%d", x-y);
        break;
    }
    case 3:
    {
        printf("The Multiplication of a and b is: ");
        printf("%d", x*y);
        break;
    }
    case 4:
    {
        printf("The Divsion of a and b is: ");
        printf("%d", x/y);
        break;
    }
    default:
    {
        printf("Please Enter a Valid Choice!");
    }
  }
}

int main()
{   int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    calculator(a,b);
    return 0;
}