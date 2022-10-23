#include<cstdio>
int main(){
    int x;
    scanf("%d", &x);
    if(x % 3 == 0)
        printf("3 ");
    if(x % 5 == 0)
        printf("5");
    return 0;
}
