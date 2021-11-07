#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number of Elements : ");
    scanf("%d",&n);
    printf("Enter the array Elements : " );
    int a[n];                    //Array Declaration
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The Second Smallest Element is %d",a[n-2]);   //Accessing the smallest element
    printf("\n");
    printf("The Second Largest Element is %d",a[1]);      //Accessing the largest element
    return 0;
}