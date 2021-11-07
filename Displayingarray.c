// #include<stdio.h>
// int main(){
//    /* 2D array declaration*/
//    int disp[2][3];
//    /*Counter variables for the loop*/
//    int i, j;
//    for(i=0; i<2; i++) {
//       for(j=0;j<3;j++) {
//          printf("\nEnter value for disp[%d][%d]:", i, j);
//          scanf("%d", &disp[i][j]);
//       }
//    }
//    //Displaying array elements
//    printf("\nTwo Dimensional array elements:\n");
//    for(i=0; i<2; i++) {

//       for(j=0;j<3;j++) {

//          printf("%d ", disp[i][j]);
//          if(j==2){
//             printf("\n");
//          }
//       }
//    }
//    return 0;
// }
#include <stdio.h>

int main()
{
    int i, j, m, n;
    int matrix[10][20];

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    /* Input data in matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    /* Display the matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {   
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}