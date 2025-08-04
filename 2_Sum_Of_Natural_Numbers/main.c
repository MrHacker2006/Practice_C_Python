#include<stdio.h>

void Sum_of_N(int n)
{   
    int sum=0;
    for (int i=1 ; i<=n; i++)
    {
        sum = sum+i;
    }
    printf("%d", sum);
}

int main()
{
    int num;
    printf("Enter the number, till then you want the sum of N Natural Numbers: ");
    scanf("%d", &num);

    Sum_of_N(num);
    return 0;
}