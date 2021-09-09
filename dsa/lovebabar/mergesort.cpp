#include <stdio.h>
#include <stdlib.h>
void merge(int a[], int low, int mid, int high)
{
    int num_elements_1 = mid - low + 1;
    int num_elements_2 = high - mid;
    int *n1 = (int *)malloc(sizeof(int) * num_elements_1);
    int *n2 = (int *)malloc(sizeof(int) * num_elements_2);
    for (int i = 0; i < num_elements_1; i++)
        n1[i] = a[low + i];
    for (int j = 0; j < num_elements_2; j++)
        n2[j] = a[mid + j + 1];
    int i = 0;
    int j = 0;
    int k = low;
    while (i < num_elements_1 && j < num_elements_2) //as long as both arrays have values
    {
        if (n1[i] <= n2[j])
            a[k++] = n1[i++];
        else
            a[k++] = n2[j++];
    }
    while (i < num_elements_1)
        a[k++] = n1[i++];
    while (j < num_elements_2)
        a[k++] = n2[j++];
}
void mergeSort(int *a, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main()
{
    int a[10] = {9, 4, 3, 2, 5, 6, 7, 1, 0, 8};
    int n = 10, i, j, temp;

    printf("UNSORTED ARRAY\n");
    printf("--------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
    printf("--------------------------------------------------------------\n");

    //Calling Merge Sort Function
    mergeSort(a, 0, n - 1);

    printf("SORTED ARRAY\n");
    printf("--------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
    printf("--------------------------------------------------------------\n");
}