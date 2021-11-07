#include <stdio.h>
void reverseArray(int *arr,int n)
{ for(int i=0;i<n/2;i++){
int temp=arr[i];
arr[i]=arr[n-1-i];
arr[n-1-i]= temp;
}
}
int main()
{ 
int arr[100],n;
printf("Enter Number of Elements : "); scanf("%d",&n);
printf("Enter Array Elements :\n"); 
for(int i=0;i<n;i++){ scanf("%d",&arr[i]);
}
reverseArray(arr,n); printf("Modified Array is :\n"); for(int i=0;i<n;i++)
{ printf("%d ",arr[i]); 
}
 } 
