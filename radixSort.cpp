#include <stdio.h>
int largest(int arr[], int n);
void radix_sort(int arr[], int n);
int main()
{
    int arr[10], i, n;
    printf("\n Enter the size of the array : ");
    scanf("%d",&n);
    printf("\nEnter %d elements in the array : \n",n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    radix_sort(arr, n);
    printf("\nSorted Array in ascending order is : \n");
    for(i = 0; i < n; i++)
        printf("%d ",arr[i]);
    return 0;
}
int largest(int arr[], int n)
{
    int large = arr[0], i;
    for(i = 1; i < n; i++)
    {
        if(arr[i] > large)
            large = arr[i];
    }
    return large;
}
void radix_sort(int arr[], int n)
{
    int bucket[10][10], bucket_count[10];
    int i, j, k, remainder, NOP = 0, divisor = 1, large, pass;
    large = largest(arr, n);
    while(large > 0)
    {
        NOP++;
        large /= 10;
    }
    for(pass = 0; pass < NOP; pass++)
    {
        for(i = 0; i < 10; i++)
            bucket_count[i] = 0;
        for(i = 0; i < n; i++)
        {
            remainder = (arr[i]/divisor)%10;
            bucket[remainder][bucket_count[remainder]] = arr[i];
            bucket_count[remainder] += 1;
        }
        i = 0;
        for(k = 0; k < 10; k++)
        {
            for(j = 0; j < bucket_count[k]; j++)
            {
                arr[i] = bucket[k][j];
                i++;
            }
        }
        divisor *= 10;
    }
}