#include<stdio.h>
int main()
{
    int num[3][4]={1, 2, 3, 4,
                   2, 3, 4, 5,
                   3, 4, 5, 6};
    int r,c,row[3]={0,0,0},column[3]={0,0,0};
    
    printf("\n***Show Matrix***\n\n");
    for(r=0;r<3;r++)
    {
        for(c=0;r<3;r++)
        {
            for(c=0;c<4;c++)
            printf("%5d", num[r][c]);
        printf("\n\n");
        }
        for(r=0;r<3;r++)
        for(c=0;c<3;c++)
    {
        row[r]=row[r]+num[r][c];
        column[c]=column[c]+num[r][c];
    }
    printf("sum of row[%d]=%d\n",r,row[r]);
    for(c=0;c<4;c++)
    printf("sum of column[%d]=%d\n",c,column[c]);
    }
    return 0;
}