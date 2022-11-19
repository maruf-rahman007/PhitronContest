#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int a=1;a<=t;a++)
    {
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf(" %s",&str);
        int count=0;
        for(int i=0;i<=n;i++)
        {
            if((str[i]=='0' && str[i+1]=='1') || (str[i]=='1' && str[i+1]=='0'))
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
