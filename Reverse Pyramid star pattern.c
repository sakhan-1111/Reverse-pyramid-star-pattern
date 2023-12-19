#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, r;
    printf("Enter number of rows: ");
    scanf("%d", &r);
 
    for(i=r; i>=1; i--)
    {
        for(j=i; j<r; j++)
        {
            printf(" ");
        }
        for(j=1; j<=((2*i)-1); j++)
        {
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}