#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int arre[even];
    int arro[odd];
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0){
            arre[e]=arr[i];
            e++;
        }
        else
            {
                arro[o]=arr[i];
                o++;
            }
    }
    int evensum=0;
    int oddsum=0;
    if(even==1)
    {
        evensum+=arre[0];
    }
    else if (even>1)
    {
        evensum=arre[0]+arre[1];
    }
    if(odd==1)
    {
        oddsum=0;
    }
    else if(odd>1)
    {
        oddsum=arro[0]+arro[1];
    }
    if(evensum>=oddsum)
    {
        printf("%d\n",evensum);
    }
    else if(evensum<oddsum)
    {
        printf("%d\n",oddsum);
    }

    return 0;
}
