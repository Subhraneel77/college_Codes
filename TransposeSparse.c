#include <stdio.h>
int main()
{
int a[10][10],b[10][10],row1,col1,i,j,c=0,d;
printf("Enter the array A row size: ");
scanf("%d",&row1);
printf("Enter the array A column size: ");
scanf("%d",&col1);
printf("Enter the array A element:\n");
for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
        scanf("%d",&a[i][j]);
}
printf("The elements of array A :\n");
for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
        printf("%d ",a[i][j]);
    printf("\n");
}
for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
        if(a[i][j]!=0)
        c++;
}
d=row1*col1;
if(d-c>d/2)
{
printf("The no. of elements with non zero value: %d\n",c);
printf("Rows\tColumns\tValues\n");
printf("%d\t%d\t%d\n",row1+1,col1+1,c);
for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
    {
        if(a[i][j]!=0)
        {
        printf("%d\t%d\t%d\n",i+1,j+1,a[i][j]);
        }
    }
}
for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
    {
        b[j][i]=a[i][j];
    }
}
for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
        printf("%d ",b[i][j]);
    printf("\n");
}
printf("The no. of elements with non zero value: %d\n",c);
printf("Rows\tColumns\tValues\n");
printf("%d\t%d\t%d\n",row1+1,col1+1,c);
for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
    {
        if(b[i][j]!=0)
        {
        printf("%d\t%d\t%d\n",i+1,j+1,b[i][j]);
        }
    }
}
}
else
    printf("The Entered Matrix is not Sparse Matrix");
}