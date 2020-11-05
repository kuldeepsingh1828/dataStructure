#include <stdio.h>
//78 12 90 45 89 61 25 19 37 

                //                 90

                //         89              78
                //     19       45     61      25
                // 12      19
void buildheap();
void heapsort();
int x[100], n, i;
int main()
{
    printf("\n Enter the size of the array : ");
    scanf("%d",&n);
    printf("\nEnter %d elements in the array : \n",n);
    for(i = 1; i <= n; ++i)
        scanf("%d", &x[i]);
    buildheap();
    for (int i = 1; i <= n; ++i)
    {
        printf("%d\t",x[i] );
    }
   heapsort();
    printf("\nSorted Array in ascending order is : \n");
    for(i = 1;i <= n; ++i)
        printf("%5d", x[i]);
    return 0;
}
void buildheap()
{
    // //90 89 78 61 45 25 19 12 37
    // k = 8
    // i = 8
    // j = 4
    // temp = 89
    int j, k, temp;
    for(k=2; k <= n; ++k)
    {
        i = k;
        temp = x[k];
        j = i / 2;
        while((i > 1) && (temp < x[j]))
        {
            x[i] = x[j];
            i = j;
            j = i / 2;
            if(j < 1)
                j = 1;
        }
        x[i] = temp;
    }
}
void heapsort()
{
    int j, k, temp, value;
    for(k=n; k >= 2;--k)
    {
        temp = x[1];
        x[1] = x[k];
        x[k] = temp;
        i=1;
        value = x[1];
        j = 2;
        if((j+1) < k)
            if(x[j+1] > x[j])
                j++;
        while((j <= (k-1)) && (x[j] > value))
        {
            x[i] = x[j];
            i = j;
            j = 2*i;
            if((j+1) < k)
                if(x[j+1] > x[j])
                    j++;
                else
                    if(j > n)
                        j = n;
            x[i] = value;
        }
    }
}