#include <stdio.h>

int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    char a[2][n];
    for(i=0;i<2;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[0][i]==a[1][i])
        {
            x++;
        }
    }
    printf("%d %d",x,n-x);
    return 0;
}
