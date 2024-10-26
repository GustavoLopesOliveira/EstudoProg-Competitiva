#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= m; i++)
        {
            printf("#");
        }

        printf("\n");

        for (int i = 1; i <= m; i++)
        {
            if (i == m)
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        
        printf("\n");

            for (int i = 1; i <= m; i++)
        {
            printf("#");
        }
    }
}