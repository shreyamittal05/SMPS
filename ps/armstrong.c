#include<stdio.h>
int main()
{
int n,i,ae[100],ao[100],e=0,o=0,a[100];
printf("enter any nos");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
    a[i]=i+1;
}

for(i=0;i<n;i++)
{
    if(n%2==0)
    {
       ae[e]=i;
       e++;
    } 
    else
    {
        ao[o]=i;
        o++;
    }
}
for(i=0;i<o;i++)
  { printf("%d",ao[i]);}
   for(i=0;i<e;i++){
     printf("%d",ae[i]);
   }
}