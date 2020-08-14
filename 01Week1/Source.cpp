#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, w, fail = 0;
    scanf("%d %d", &n, &w);
    char word[1000][1000];
    char check[1][1000];
    for (int i = 0; i < w; i++)
    {
        scanf(" %s", word[i]);
    }
    for (int i = 0; i < n; i++)
    {
        check[0][i] = word[0][i];
    }
    for (int i = 0; i < w; i++)
    {
        fail = 0;
        for (int j = 0; j < n; j++)
        {
            if (check[0][j] != word[i][j])
            {
                fail++;
            }
        }
        if (fail > 2)
        {
            printf("%s", word[i - 1]);
            return 0;
        }
        else
            for (int j = 0; j <= n; j++)
            {
                check[0][j] = word[i][j];
            }
    }
    printf("%s", word[w - 1]);
    return 0;
}