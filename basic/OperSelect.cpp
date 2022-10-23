#include<cstdio>
int plus(int x,int y){
    return x + y;
}
int minus(int x,int y){
    return x - y;
}
int times(int x,int y){
    return x * y;
}
int divideBy(int x,int y){
    return x / y;
}
int mod(int x,int y){
    return x % y;
}
int main(){
    int x, y ,z;
    scanf("%d %d %d", &x, &y, &z);
    if(z == 1)
        printf("%d", plus(x, y));
    else if(z == 2)
        printf("%d", minus(x, y));
    else if(z == 3)
        printf("%d", times(x, y));
    else if(z == 4){
        if(y == 0)
            printf("cannot divide by zero");
        else
            printf("%d", divideBy(x, y));
    }
    else if(z == 5)
        if(y == 0)
            printf("cannot divide by zero");
        else
            printf("%d", mod(x, y));
    return 0;
}
