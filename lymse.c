#include <stdio.h>

int main()
{
    int i,j,a,n;
    printf("enter  no of rows");
    scanf("%d",&n);
    int x=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",a++);
        }
        printf("\n");
    }

    return 0;
}

