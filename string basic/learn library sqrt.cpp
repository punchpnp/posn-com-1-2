#include<cstdio>
#include<cmath>
int main(){
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int c = pow(a,2) + pow(b,2);
    c = sqrt(c);
    printf("%d", c);

    return 0;
}
