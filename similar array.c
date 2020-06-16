#include <stdio.h>
int main()
{
        int a[10],b[10];
        int i,j,k,n;
        printf("Enter the no. of elements in array :");
        scanf("%d",&n);
        printf("Enter the array elements for first array\n");
        for (i=0;i<n;i++) 
        {
                scanf("%d", &a[i]);
        }
        printf("Enter the array elements for second array\n");
        for (j=0;j<n;j++)
        {
          scanf("%d",&b[j]);
         }
         for(i=0;i<n;i++)
         {
           for(j=0;j<n;j++)
            {
              if(a[i]==b[j])
              {
                k++;
               }
              }
           }
        if(k==n)
         printf("Both array are similar");
        else
         printf("arrays are not similar");
}