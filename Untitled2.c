#include<stdio.h>
int main()
{

    int i,j,x,y;
    int arr[5][5];
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    };
    int row_c,col_c,ans;
    if(x>2)
    {
        row_c = x-2;
    }
    else
    {
        row_c = 2-x;
    }
    if(y>2)
    {
        col_c = y-2;
    }
    else
    {
        col_c = 2-y;
    }
    ans = row_c+col_c;
    printf("%d",ans);
    return 0;
}
