#include<stdio.h>
#include<string.h>
int main()
{
    char s[110];
    while(gets(s))
    {
        int len=strlen(s);
        int k=0, maxx=0;
        for(int i = 0; i < len+1 ;i++)
        {
            k++;
            if(maxx<k)maxx=k;
            if(i==len)break;
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
                k=0;
        }
        printf("%d\n",maxx);
    }
    return 0;
}
