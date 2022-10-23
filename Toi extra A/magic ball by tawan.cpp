#include <cstdio>
int main()
{
    int rock, n;
    scanf("%d", &rock);
    scanf("%d", &n);
    int rockmirror[rock] = {}; // 0 1 2 ... 9

    for (int j = 0; j < rock; j++) // printf 0 0 0 0 . . .
        printf("%d ", rockmirror[j]);

    //input x
    int x;
    for (int i = 0; i < n * 2; i++){
        scanf("%d", &x); // 9
        if (i % 2 == 0) // A
            rockmirror[x - 1] = 1; // change some number and just one number
        else //B
            rockmirror[x - 1] = 2;
        for (int j = 0; j < rock; j++)
            printf("%d ", rockmirror[j]);
    }
    return 0;
}
// 0 -> 1 == 1
// 1 -> 1 == 1
// 2 -> 1 == 1
