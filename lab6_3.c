#include<stdio.h>

int main()
{
    int t,q,i,j,o=0,max;
    scanf("%d %d\n",&t,&q);
    long int a[t],b[t];
    char x;
    long int y,m,n;
    for(i=0;i<t;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    for(i=0;i<q;i++)
    {
        scanf("%c %ld %ld\n",&x,&m,&n);
        if(x=='U')
            a[m] = n;
        if(x=='P')
        {
            max = a[m];
            for(j=m;j<=n;j++)
            {
                if(a[j]>max)
                {
                    max = a[j];
                    max = b[o];
                }
            }
            o++;
        }
    }
    for(i=0;i<o;i++)
        printf("%ld\n",b[i]);
    return 0;
}
