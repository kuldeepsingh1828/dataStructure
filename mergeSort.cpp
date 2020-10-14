#include <stdio.h>
void merge(int a[], int, int, int);
void merge_sort(int a[], int, int);
int main()
{
    int arry[10],i,n;
    printf("\n Enter the size of the array : ");
    scanf("%d",&n);
    printf("\n Enter %d elements in the array : \n",n);
    for(i=0; i<n; i++)
        scanf("%d", &arry[i]);
    merge_sort(arry, 0, n-1);
    printf("\n Sorted Array in ascending order is : \n");
    for(i=0; i<n; i++)
        printf("%d ",arry[i]);
    return 0;
}
void merge(int arry[], int beg, int mid, int end)
{
    int i = beg, j = mid + 1, index = beg, temp[10], k;
    while((i <= mid) && (j <= end))
    {
        if(arry[i] < arry[j])
        {
            temp[index] = arry[i];
            i++;
        }
        else
        {
            temp[index] = arry[j];
            j++;
        }
        index++;
    }
    if(i > mid)
    {
        while(j <= end)
        {
            temp[index] = arry[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i <= mid)
        {
            temp[index]= arry[i];
            i++;
            index++;
        }
    }
    for(k = beg;k < index; k++)
        arry[k] = temp[k];
}
void merge_sort(int arry[], int beg, int end)
{
    int mid;
    if(beg < end)
    {
        mid = (beg + end) / 2;
        merge_sort(arry, beg, mid);
        merge_sort(arry, mid+1, end);
        merge(arry, beg, mid, end);
    }
}