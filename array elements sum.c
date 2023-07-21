#include <stdio.h>
int main()
{
  int i;
  int arr[7]={1,8,3,5,6,4,7};
  int sum=0;
  for(i=0;i<7;i++)
  {
      sum+=arr[i];
  }
  printf("%d ",sum);
      return 0;
}
