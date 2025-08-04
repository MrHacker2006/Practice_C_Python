#include<stdio.h>

void Sum_of_N(int n)    //3 or 4
{   
    int sum=0;                    // n       i         sum=0      
    for (int i=1 ; i<=n; i++)     // 3       1           1       
    {                             //         2           1+2=3
        sum = sum+i;              //         3           3+3=6
    }                             //        ---          ------
    printf("%d", sum);            //        =6             =6
                                  //        ---          -----
}                                 // 4       4           4+6=10

int main()
{
    int num;
    printf("Enter the number, till then you want the sum of N Natural Numbers: ");
    scanf("%d", &num);     

    Sum_of_N(num);   //3 or 4
    return 0;
}