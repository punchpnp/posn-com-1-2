#include<cstdio>
int main(){
    int num;
    scanf("%d", &num);
    int i;
    int prime = 0;
    // check 2
    for(i = 2; i < num; i+=2){
        if(num % i == 0){
            prime = 1;
            break;
        }
    }
    for(i = 3; i < num/3; i+=2){
        if(num % i == 0){
            prime = 1;
            break;
        }
    }
    if(prime == 1)
        printf("%d is not prime", num);
    else
        printf("%d is prime", num);
    return 0;
}
