#include<stdio.h>
void main (){
    int i,j,k=0,m,n,a[10],b[10];
    printf("elements of 1st array");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    printf("elements of 2nd array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        
    }
    int c[n+m];
    while(i<=m && j<=n)
    {
    
    if(a[i]<=b[j])
    {
        c[k]=a[i];
        i=i+1;
        k=k+1;
    }
    else 
    {
        c[k]=b[j];
        j=j+1;
        k=k+1;
    }
    }
    while(i<m)
    {c[k]=a[i];
    k=k+1;
    i=i+1;}
    while(j<n)
    {
        c[k]=b[j];
        k=k+1;
        j=j+1;
    }
    int l=m+n;
    for(k=0;k<l;k++){
         printf("%d",c[k]);
    }
     
}