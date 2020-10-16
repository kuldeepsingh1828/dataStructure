#include <stdio.h>
int partition(int a[], int beg, int end);
void quick_sort(int a[], int beg, int end);
int main()
{
    int arry[10], i, n;
    printf("\n Enter the size of the array : ");
    scanf("%d", &n);
    printf("\nEnter %d elements in the array : \n",n);
    for(i=0; i < n; i++)
        scanf("%d",&arry[i]);
    quick_sort(arry, 0, n-1);
    printf("\nSorted Array in ascending order is : \n");
    for(i = 0; i<n; i++)
        printf("%d ", arry[i]);
    return 0;
}
int partition(int a[], int beg, int end)
{
    int left, right, temp, loc, flag;
    loc = left = beg;
    right = end;
    flag = 0;
    while(flag != 1)
    {
        for (int i = 0; i < 10; ++i)
    {
        printf("%d ",a[i] );
    }
    printf("\n");
        while((a[loc] <= a[right]) && (loc != right))
            right--;
        if(loc == right)
            flag = 1;
        else if(a[loc] > a[right])
        {
            temp = a[loc];
            a[loc] = a[right];
            a[right] = temp;
            loc = right;
        }
        if(flag != 1)
        {
            while((a[loc] >= a[left]) && (loc != left))
                left++;
            if(loc == left)
                flag = 1;
            else if(a[loc] < a[left])
            {
                temp = a[loc];
                a[loc] = a[left];
                a[left] = temp;
                loc = left;
            }
        }
    }
    return loc;
}
void quick_sort(int a[], int beg, int end)
{
    int loc;
    if(beg < end)
    {
        loc = partition(a, beg, end);
        quick_sort(a, beg, loc-1);
        quick_sort(a, loc+1, end);
    }
}