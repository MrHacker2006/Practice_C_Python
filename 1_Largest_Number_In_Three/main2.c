#include <stdio.h>

void print_largest(int a, int b, int c) 
{
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    if (a == b && b == c) {
        printf("All numbers are equal.\n");
    }
    else if (a == max && b == max && a != c) {
        printf("a and b are equal and larger than c.\n");
    }
    else if (a == max && c == max && a != b) {
        printf("a and c are equal and larger than b.\n");
    }
    else if (b == max && c == max && b != a) {
        printf("b and c are equal and larger than a.\n");
    }
    else if (a == max) {
        printf("a is the largest number.\n");
    }
    else if (b == max) {
        printf("b is the largest number.\n");
    }
    else {
        printf("c is the largest number.\n");
    }
}

int main() {
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    print_largest(a, b, c);

    return 0;
}
