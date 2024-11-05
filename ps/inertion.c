#include<stdio.h>
int main()
{
    int a[10],i,j,n,temp;
    printf("enter an number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("THE ARRAY VALUES ARE %d",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    
        { 
          temp=a[i];
           j=i-1;
           while(j>=0 && a[j]>temp)
            {
                a[j+1]=a[j];
                j--; }

                a[j+1]=temp;
            
        }
     printf("the array elements after sorting");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}