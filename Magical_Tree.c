#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r = 6+(n-1)/2;
    int star = 1;
    int space = r-1;
    for (int i=1; i<=r; i++)
    {
        for (int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for (int j=1; j<=star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space --;
    }
    int x = n;
    int y = 5;
    space = (2*r - 1 - x)/2;
    for (int i=1; i<=y; i++)
    {
        for (int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for (int j=1; j<=x; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}