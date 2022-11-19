#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        int j=i;
        for(int x=1; x<=n; x++)
        {
            if(x==1)
            printf("%d",j);
            else if(x==n || i==n)
                printf("%d",n);
            else if(x>1 && x<n && i==1)
                printf("%d",x);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
