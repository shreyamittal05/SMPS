#include<stdio.h>
int main (){
    int i,j,a[10],temp,n;
    printf("enter the elemnets of an array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++) 
    {
        for(j=0;j<n-i-1;j++)
        {
            a[j]=temp;
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    printf("the array elemts after sorting");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}