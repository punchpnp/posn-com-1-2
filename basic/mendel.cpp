#include<cstdio>
int main(){
    int t;
    scanf("%d", &t);
    int n;
    scanf("%d", &n);
    if(t == 1)
        printf("%d 0", n);
    else if(t == 2)
        printf("%d 0", n);
    else if(t == 3)
        printf("%d 0", n);
    else if(t == 4)
        printf("0 %d", n);
    else if(t == 5)
        printf("%d %d", n/2, n/2);
    else if(t == 6)
        printf("%d %d", n - (n/4),n/4);
    return 0;
}
