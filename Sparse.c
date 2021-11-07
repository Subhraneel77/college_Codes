#include<stdio.h>

int main()
{
    int arr[15][15];
    int i,j,p,m,n,k=0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the matrix elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0)
                k++;
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");        
    }
    if(k>(m*n/2))
    {
        printf("**It is Sparse matrix **\n");
        printf("3 tuple Format: \n");
        printf("Row\tColumn\tValue\n");
        printf("%d\t%d\t%d\n\n",m,n,(m*n)-k);
        for(p=1;p<=(m*n)-k;)
        {
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(arr[i][j]!=0)
                    {
                        printf("%d\t%d\t%d\n",(i+1),(j+1),arr[i][j]);
                        p++;
                    }                   
                }
            }
        }
    }
    else
        printf(" It is not a Sparse Matrix ie, it is a Dense Matrix. ");
    return 0;
}