
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];int b[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    scanf("%d",&b[i]);
}
printf("(%d,%d),",a[0],b[0]);
for(int i=0;i<n;i++)
{
    for(int j=1;j<n;j++)
    {

            if(b[i]+1==a[j]&&j==n-1)
             {
                  printf("(%d,%d)",a[j],b[j]);

             }
             else if(b[i]+1==a[j]&&j!=n-1)
             {
                printf("(%d,%d),",a[j],b[j]);
                i=j;}
    }
}
}
