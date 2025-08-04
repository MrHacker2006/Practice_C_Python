/*
    🔁 Conversion Formulas:
    Celsius to Fahrenheit:

    𝐹 = (𝐶*9/5)+32

    Fahrenheit to Celsius:

    𝐶=(𝐹−32)×5/9
*/

// Fahrenheit ----> Celsius

#include<stdio.h>

void F_to_C(float F)
{
    float C;
    C = (F-32)*5/9;
    printf("The Temperature in Celsius is : ");
    printf("%f", C);
}

void C_to_F(float C)
{
    float F;
    F = (C*9/5)+ 32;
    printf("The Temperature in Fahrenheit is : ");
    printf("%f", F);
}

int main()
{ 
  int choice;
  printf("Enter 1 For Converting Fahrenheit-->Celsius\nEnter 2 for Converting Celsius-->Fahrenheit\nEnter Choice : ");
  scanf("%d", &choice);
  switch(choice)
  {

        case 1: 
        {
            float F;
            printf("Enter the Temperature in Fahrenheit for converting it into Celsius : ");
            scanf("%f", &F);
            F_to_C(F);
            break;
        }

        case 2:
        {
            float C;
            printf("Enter the Temperature in Celcius for converting it into Fahrenheit : ");
            scanf("%f", &C);
            C_to_F(C);
            break;
        }

        default:
        {
            printf("Please Enter Valid Choice.\n");
            break;
        }

  }
  return 0;
}
