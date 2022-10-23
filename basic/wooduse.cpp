#include<cstdio>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int big = (2 * m) + (1 * n);
    int small = (6 * m) + (4 * n);
    printf("%d ", big);
    printf("%d", small);
    return 0;
}
