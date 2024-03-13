#include <stdio.h>
int main()
{
    int i, j, k = 1, l = 1;
    char h = '*';

    scanf("%d", &i);
    if (i <= 25 && i > 0)
    {
        while (i--)
        {
            scanf("%d", &j);
            if (j <= 80 && j > 0)
            {
                l=1;
                while (l <= j)
                {
                    k = 1;
                    while (k <= j)
                    {
                        printf("%c", h);
                        k++;
                    }

                    printf("\n");
                    if(l==j) printf("\n");

                    l++;
                }
            }
        }
    }
}
