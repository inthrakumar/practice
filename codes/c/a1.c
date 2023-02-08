// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr;
    printf("enter the no of elements:  ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error");
        exit(0);
    }
    else
    {
        printf("Enter the elements of the array\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        printf("The elements are \n");
        for (int j = 0; j < n; j++)
        {
            printf("%d", *(ptr + j));
            printf("\n");
        }
        printf("Enter the new size:\n");
        scanf("%d", &n);
        ptr = (int *)realloc(ptr, n * sizeof(int));
        printf("Enter the elements of the new array");
        for (int y = 0; y < n; y++)
        {
            scanf("%d", ptr + y);
        }
        printf("New elements are\n");
        for (int t = 0; t < n; t++)
        {
            printf("%d", *(ptr + t));
            printf("\n");
        }

        free(ptr);
    }

    return 0;
}