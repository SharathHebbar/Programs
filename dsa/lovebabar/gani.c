#include <stdio.h>

void main()
{
    int num, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\n");
    while (num > 1)
    {
        if (num % 2 != 0)
        {

            num = (num * 3) + 1;
        }
        else
        {
            num = num / 2;
        }
        printf("\nNum: %d\t", num);
        count++;
    }
    printf("\nCount: %d\n", count);
}