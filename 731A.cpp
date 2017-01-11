#include<stdio.h>
#include<string.h>
char s[200];
using namespace std;
int min(int a,int b)
{
    if(a>b)return b;
    else return a;
}
int main()
{
    while(~scanf("%s",s))
    {
        char a,b,c;
        int sum=0;
        int len=strlen(s);
        for(int i = 0; i < len; i++)
        {
            if(i!=0)
            {
                a=s[i];
                b=s[i-1];
                if(a<b)
                {
                    c=a;a=b;b=c;
                }
                sum+=min(a-b,b+26-a);
            }
            else
            {
                b='a';
                a=s[i];
                sum+=min(a-b,b+26-a);
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
