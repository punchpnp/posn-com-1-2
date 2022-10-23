#include<cstdio>
int main(){
    int num;
    int is_prime = 1;
    scanf("%d", &num);
    int i;
    for(i = 2; i*i <= num; i++){
        if(num % i == 0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime == 1)
        printf("%d is prime", num);
    else
        printf("%d is not prime", num);


    return 0;
}
