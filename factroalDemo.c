#include<stdio.h>
int main()
{
    int i, fact=1, n;
    printf("Enter Potive Number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factoral-%d=%d",n,fact);





    return 0;
}
