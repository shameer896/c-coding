#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0)
    {
        i++;
        n=n/10;
    }
    printf("The number of digit: %d",i);
}   