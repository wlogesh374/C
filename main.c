#include<stdio.h>
int main()
{
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
	int A[1001];
	int max=1001;
	int val[1000],wt[1000];
	while(n--)
	{
      scanf("%d%d",&a,&b);
      for(c=0;c<=(b-a);c++)
      {
      	A[c]=max;
      }
      A[0]=0;
      scanf("%d",&f);
      for(e=0;e<f;e++)
      {
      	scanf("%d%d",&val[e],&wt[e]);
      }
      for(d=1;d<=(b-a);d++)
      {
        for(e=0;e<f;e++)
        {
            if(wt[e]<=d && A[d-wt[e]]+val[e]<A[d])
            {
            	A[d]=A[d-wt[e]]+val[e];
            }
        }
      }
      if(A[b-a]==max) 
      {
          printf("This is impossible.\n");
          }
          else
          {
              printf("The minimum amount of money in the piggy-bank is %d.\n",A[b-a]);
          }
    }
	return 0;
}