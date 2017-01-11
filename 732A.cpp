#include<stdio.h>
int main()
{
    int k;
    int r;
    while(~scanf("%d%d",&k,&r))
    {
        for(int i = 1; i < 11; i++)
        {
            if((k*i)%10==0||(k*i)%10==r)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
