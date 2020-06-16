#include<stdio.h>

int main()
{
int i , j, r , c , n , a[100][100],max[100];
printf("Enter the number of rows: ");
scanf("%d",&r);
printf("Enter the number of columns: ");
scanf("%d",&c);
printf("Enter the elements of the array- \n");
for(i = 0; i < r; i=i+1)
{
for(j = 0; j < c; j=j+1)
{
printf("[%d %d]: ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("The input matrix is:- \n");
for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i = 0; i < r; i++)
{
max[i] = a[i][j];
for(j = 0; j < c ; j++)
{
if(a[i][j]>max[i])
{
max[i]=a[i][j];
}
}

}
for(i = 0; i < r; i++)
{
printf("Maximum element of the row %d is: %d\n",i,max[i]);
}
return 0;
}