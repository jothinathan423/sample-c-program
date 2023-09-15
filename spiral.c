#include <stdio.h>

int main()
{
    int jothi[3][3] = {{1,2,3},{5,6,7},{9,8,4}};
    int nathan[9];

    for(int i=1;i<2;i++)
    {
        for(int j=1,l=0;j<3;j++,l++)
        {
            nathan[l]=jothi[i][j];
        }
    }

    for(int i=2;i<3;i++)
    {
        for(int j=2,l=2;j>-1;j--,l++)
        {
            nathan[l]=jothi[i][j];
        }
    }

    for(int i=1,l=5;i>-1;i--,l++)
    {
        for(int j=0;j>-1;j--)
        {
            nathan[l]=jothi[i][j];
        }
    }

        for(int i=0;i>-1;i--)
    {
        for(int j=1,l=7;j<3;j++,l++)
        {
            nathan[l]=jothi[i][j];
        }
    }

    for(int n=0;n<9;n++)
    {
        printf("%d \n",nathan[n]);
    }
}
