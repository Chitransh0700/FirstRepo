#include<stdio.h>
main()
{
    int *ptr,i,int arr[5];
    ptr = getarr();
    printf("elements of array: ");

    for(i=0;i<5;i++)
    {
        printf("%d",ptr[i]);
    }
}

int * getarr(int * arr)
{
    printf("enter the element: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;
}