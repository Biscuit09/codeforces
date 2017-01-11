#include<stdio.h>
#include<string.h>
#define N 200010
int a[N];
char c[N];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        scanf("%s",c);
        for(int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        int flag=0;
        int left,right,min=-1;
        int tmp;
        for(int i = 0; i < n; i++)
        {
            if(c[i]=='R')
            {
                flag=1;
                left=a[i];
            }
            else if(flag==1&&c[i]=='L')
            {
                flag=0;
                right=a[i];
                tmp=right-left+1;
                if(min==-1||min>tmp)
                    min=tmp;
            }
        }
        if(min==-1)
            printf("-1\n");
        else
            printf("%d\n",min/2);
    }
    return 0;
}
