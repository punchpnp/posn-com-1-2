#include<cstdio>
int isEven(int x){
    if(x % 2 == 0)
        return 1;
    else
        return 0;
}
int isOdd(int x){
    return !isEven(x);
}
int main(){
    int x;
    scanf("%d", &x);
    printf("isEven = %d\n", isEven(x));
    printf("isOdd = %d\n", isOdd(x));
    return 0;
}
