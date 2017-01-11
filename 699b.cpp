#include<stdio.h>
#include<string.h>
char maps[1010][1010];
int column[1010];
int row[1010];
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        memset(maps,0,sizeof(maps));
        memset(column,0,sizeof(column));
        memset(row,0,sizeof(row));
        for(int i = 0; i < n; i++)
            scanf("%s",maps[i]);
        int count=0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            {
                if(maps[i][j]=='*')
                {
                    count++;
                    column[j]++;
                    row[i]++;
                }
            }
        int flag=0;int x,y;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(maps[i][j]=='*')
                {
                    if(count==column[j]+row[i]-1)
                    {
                        flag=1;
                        x=i;
                        y=j;
                    }
                }
                else
                {
                    if(count==column[j]+row[i])
                    {
                        flag=1;
                        x=i;
                        y=j;
                    }
                }
                if(flag==1)break;
            }
            if(flag==1)break;
        }
        if(flag==1)
        {
            printf("YES\n");
            printf("%d %d\n",x+1,y+1);
        }
        else printf("NO\n");
    }
    return 0;
}
