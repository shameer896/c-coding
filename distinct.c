#include<stdio.h>
int main()
{
int a[20],count=0,i,j,n;
printf("enter the size of the array:\n");
scanf("%d",&n);
printf("%d\n",n);
for(i=0;i<n; i++)
{
scanf("%d",&a[i]);
printf("%d\n",a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
if(a[i]==a[j])
break;
}
if(i==j) 
{
count++;
}
}
printf("\n the count of distinct element in the array is %d",count);
}
