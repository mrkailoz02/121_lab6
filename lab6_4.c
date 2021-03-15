#include <stdio.h>

int main()
{
    int n,i,max,min,x,y;
    scanf("%d",&n);
    int a[n],b[2][n];
    for(i=0;i<n;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&b[0][i],&b[1][i]);
        a[b[0][i]]++;
        a[b[1][i]]++;
    }
    max = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            x = i;
            max = a[i];
        }
    }
    if(a[b[0][x]-1]<a[b[0][x]-1])
        y = b[0][x]-1;
    else if(a[b[0][x]-1]>a[b[0][x]-1])
        y = b[1][x]-1;
    else
    {
        if(b[0][x]<b[1][x])
            y = b[0][x]-1;
        else
            y = b[1][x]-1;
    }
    printf("%d %d",x+1,y+1);
    return 0;
}
