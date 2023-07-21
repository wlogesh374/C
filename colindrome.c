
#include <stdio.h>
#include <string.h>
void main()
{
    int n,i,j,c=0,flag=1;
    printf("Enter  string: ");
    char s[20];
    scanf("%s", s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(flag==1)
        {

        j=i+5;
        for(i=i;i<n;i++,j--)
        {

      //  printf ("%d %c %d %c\n",i,s[i],j,s[j]);
        if(s[i]==s[j])
        {
            flag=1;
            c++;
        }
        else
        {
            flag=0;
            break;
        }
        if(c%3==0)
          {i+=3;
              break;}
    }
        }
    }
    if(flag==1)
        printf("colindrome");
        else
            printf("not");
}
