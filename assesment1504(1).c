#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[10];

    scanf("%s",s);
    int k=0,i,a[k],flag=1;
    char temp;
      char g[10];
    scanf("%s",g);
   // printf("\ng is %s",g);

    int n=strlen(s);

  for(i=0;i<n;i++)
  {
      if(s[i]!=g[i])
      {
         a[k]=i;
          k++;
      }
  }
     // printf("\ng is %s",g);

 // printf("K is %d\n",k);
  if(k==2)
  {
      temp=s[a[0]];
      s[a[0]]=s[a[1]];
      s[a[1]]=temp;
  }
  else
    flag=0;
  /*    printf("\ng is %s",g);

for(i=0;i<n;i++)
{
    printf("%c",s[i]);
}


  printf("flag is %d\n",flag);
      printf("\ng is %s",g);

*/
    if(flag==1)
    {
  for(i=0;i<n;i++)
  {
      if(s[i]==g[i])
      {
          flag=1;
      }
      else
      {
          flag=0;
      }
   }
    }

//printf("flag is %d\n",flag);



    if(flag==1)
   {
       printf("\nTrue");

   }
   else
    {
        printf("False");
    }



}
