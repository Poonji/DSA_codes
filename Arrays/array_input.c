#include <stdio.h>

int main()
{
    int n;
    int arr[n];
    int i,N;
    printf("enter the size of an array:\n");
    scanf("%d",&N);
    printf("enter elements in the array\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    return 0;
}
