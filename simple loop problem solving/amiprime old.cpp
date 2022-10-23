#include<cstdio>
int main(){
    int num;
    scanf("%d", &num);
    int i;
    if(num == 1)
        printf("%d is not prime", num);
    else if(num == 2)
        printf("%d is prime", num);
    for(i = 2; i < num; i++){
        if(num % i == 0)
            printf("%d is not prime", num);
        else if(num - i == 1)
            printf("%d is prime", num);
    }
    return 0;
}
