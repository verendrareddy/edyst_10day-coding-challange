#include<stdio.h>
int main()
{
    int a[100][100],t,i,j,n,m,k,num;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&m);
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=m;k++)
            {
                scanf("%d",&a[i][j]);
            }
        }
                for(j=n,k=1;j<1,k<=m/2;k++,j=j-2)
                {
                   
                
                   num=a[j][k];
                    num=num%26;
                    printf("%c",a+(num-1));
              }
               for(;j<=n,k<=m;k++,j=j+2)
               {
                   num=a[j][k];
                    num=num%26;
                    printf("%c",a+(num-1));
               }

        
        
        
        
    }
    return 0;
}

