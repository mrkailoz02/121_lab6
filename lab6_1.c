#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[n][1000],b[1000];
    for (i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (strcmp(a[i],a[j]) > 0)
            {
                strcpy(b,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],b);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}
