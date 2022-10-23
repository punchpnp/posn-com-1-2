#include<cstdio>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int i;
    int minn = a;
    if(minn > b)
        minn = b;
    if(minn > c)
        minn = c;
    for(i = minn; i > 0; i--){
        if(a % i == 0 && b % i == 0 && c % i == 0)
            break;
    }
    printf("%d", i);
    return 0;
}
