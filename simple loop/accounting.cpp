#include<cstdio>
int main(){
    int x[10000], y[10000];
    int i;
    int countIn = 0;
    for(i = 0; ; i++){
        scanf("%d", &x[i]);
        if(x[i] == 0)
            break;
        scanf("%d", &y[i]);
        countIn++;
    }
    int sumGot = 0;
    int sumPay = 0;
    int countGot = 0;
    int countPay = 0;
    //printf("%d", countIn);
    for(i = 0; i < countIn; i++){
        if(x[i] == 1){ // got money
            sumGot = sumGot + y[i];
            countGot++;
        }
        else if(x[i] == 2){ // pay money
            sumPay = sumPay + y[i];
            countPay++;
        }
    }
    printf("%d %d\n", countGot, countPay);
    printf("%d %d %d", sumGot, sumPay, sumGot - sumPay);
    return 0;
}
