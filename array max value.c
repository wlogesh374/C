#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int arr[n];
int max=arr[0];
for(i=0;i<n;i++)
{
  scanf("%d ",&arr[i]);
}
for(i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[0]>max)
  max=arr[0];
  }
  printf("the max value:%d");
  return 0;
}
