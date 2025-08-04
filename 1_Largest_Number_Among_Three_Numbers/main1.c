#include <stdio.h>

void print_largest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        printf("\na is the largest among a, b and c");
    }
    else if (b > a && b > c)
    {
        printf("\nb is the largest among a ,b and c");
    }
    else if (c > a && c > b)
    {
        printf("\nc is the largest among a,b and c");
    }
    else if (a == b && a > c )
    {
        printf("\na and b are equal and they are larger than c");
    }
    else if (a == c && a > b )
    // else if (a == c && a > b && c>b )
    {
        printf("\na and c are equal and they are larger than b");
    }
    else if (b == c && b > a )
    {
        printf("\nc and b are equal and they are larger than a");
    }
    else
    {
        printf("\nAll are equal");
    }
}

int main()
{
    int a, b, c;
    // printf("Enter the Value of a , b and c\n");
    // scanf("%d%d%d", &a,&b,&c);
    printf("Enter the Value of a: ");
    scanf("%d", &a);
    printf("Enter the Value of b: ");
    scanf("%d", &b);
    printf("Enter the Value of c: ");
    scanf("%d", &c);

    print_largest(a, b, c);

    return 0;
}