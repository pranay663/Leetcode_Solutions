#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char* strs[], int size)
{
    if (size == 0)
    {
        printf("\n");
        return;
    }

    int length = strlen(strs[0]);

    for (int i = 0; i < length; i++)
    {
        char current = strs[0][i];

        for (int j = 1; j < size; j++)
        {
            if (strs[j][i] != current || strs[j][i] == '\0')
            {
                printf("%.*s\n", i, strs[0]);
                return;
            }
        }
    }

    printf("%s\n", strs[0]);
}

int main()
{
    char* strs1[] = {"flower", "flow", "flight"};

    printf("Test Case 1:\n");
    longestCommonPrefix(strs1, 3);

    char* strs2[] = {"dog", "racecar", "car"};

    printf("Test Case 2:\n");
    longestCommonPrefix(strs2, 3);

    return 0;
}