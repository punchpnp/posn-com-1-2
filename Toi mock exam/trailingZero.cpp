#include<cstdio>
int main(){
    int num;
    int i;
    scanf("%d", &num);
    int sum = 1;
    for(i = 1; i <= num; i++){
        sum = sum * i;
    }
    printf("%d", sum);
    return 0;
}
