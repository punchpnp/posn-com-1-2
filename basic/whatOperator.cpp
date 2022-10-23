#include<cstdio>
int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if(A + B == C)
        printf("+");
    else if(A - B == C)
        printf("-");
    else if(A * B == C)
        printf("*");
    else if(A / B == C)
        printf("/");
    else
        printf("%%");
    return 0;
}
