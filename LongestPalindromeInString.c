#include <stdio.h>
#include <string.h>
void main()
{
    char s[10];
    scanf("%s", s);

    int len = strlen(s);
    char str[len * 2 + 1];

    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        str[j++] = '#';
        str[j++] = s[i];
    }
    str[j++] = '#';
    int length[j];
    int maxindex = 0;
    for (int i = 0; i <j; i++)
    {
        length[i] = 0;

        for (int l = i - 1, r = i + 1; l >= 0 && r < j; l--, r++)
        {
            if (str[l] != str[r])
                break;
            length[i]++;
         //  printf("%d %d\n",i,length[i]);
        }
        if (length[maxindex] < length[i])
           {
            maxindex = i;
            //  printf("mi %d\n",maxindex);}
           }
}
    char ans[10];
    j = 0;

    for (int i = maxindex - length[maxindex]; i <= maxindex + length[maxindex]; i++)

    {
        if (str[i] != '#')
        {
            ans[j++] = str[i];
        }
    }
    ans[j] = '\0';
    printf("%s", ans);
}

