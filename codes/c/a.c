#include <stdio.h>
#include <string.h>
#include <ctype.h>

// program 1
void sum(int *arr, int *arr1, int *arr2, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int y = 0; y < n; y++)
        {
            *arr2 = *arr + *arr1;
            ++arr2;
            ++arr;
            ++arr1;
        }
    }
}
// program2
int stringcopy(char *q, char *r)
{
    while (*q != '\0')
    {
        *r = *q;
        ++r;
        ++q;
    }
}
// progam 3
int no_of_vowels(char *p)
{
    int vowels = 0, consonants = 0;
    while (*p != '\0')
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
        {
            ++vowels;
        }
        else if (isalpha(*p) == 1 || isalpha(*p) == 2)
        {
            ++consonants;
        }
        ++p;
    }
    printf("The no of vowels in the string is %d\n", vowels);
    printf("The no of consonants in the string is %d\n", consonants);
}
// program 4
void swap(int *v, int *c)
{
    *v = *v + *c;
    *c = *v - *c;
    *v = *v - *c;
}
// program 5
int compare(char *stringpoint1, char *stringpoint2)
{
    int l1 = 0, l2 = 0;
    while (*stringpoint1 != '\0' || *stringpoint2 != '\0')
    {
        if (*stringpoint1 != *stringpoint2)
        {
            return 0;
        }
        ++stringpoint1;
        ++stringpoint2;
        ++l1;
        ++l2;
    }
    if (l1 != l2)
    {
        return 0;
    }

    return 1;
}
int main()
{
    char str[100], str1[100], str2[100], atr3[100], str4[100];
    long int a;
    scanf("%s %s %s %s %s", str, str1, str2, atr3, str4);
    scanf("%ld", &a);
    printf("%s\n%s\n%s\n%s\n%s\n%ld", str, str1, str2, atr3, str4, a);
    // program 1

    return 0;
}
