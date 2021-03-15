#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j,x=0,y=0;
    scanf("%d",&n);
    char a[n][n];
    char b[250];
    scanf("%s",b);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]='.';
    }
    for(i=0;i<strlen(b);i++)
    {
        if(b[i]=='U'||b[i]=='D')
        {
            if(b[i+1]!=b[i])
                a[x][y]='+';
            else if(a[x][y]=='.')
                a[x][y]='|';
        }
        else if(b[i]=='R'||b[i]=='L')
        {
            if(b[i+1]!=b[i])
                a[x][y]='+';
            else if(a[x][y]=='.')
                a[x][y]='-';
        }
        if(b[i]=='U')
            x--;
        else if(b[i]=='D')
            x++;
        else if(b[i]=='R')
            y++;
        else if(b[i]=='L')
            y--;
        if(b[i]=='U'||b[i]=='D')
        {
            if(b[i+1]!=b[i])
                a[x][y]='+';
            else if(a[x][y]=='.')
                a[x][y]='|';
        }
        else if(b[i]=='R'||b[i]=='L')
        {
            if(b[i+1]!=b[i])
                a[x][y]='+';
            else if(a[x][y]=='.')
                a[x][y]='-';
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
    return 0;
}

