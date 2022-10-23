#include<cstdio>
int main(){
    int i;
    int x[10000];
    int count = 0;
    for(i = 0; ; i++){
        scanf("%d", &x[i]);
        if(x[i] <= 0)
            break;
        count++;
    }
    int countZigOdd = 0;
    int countZigEven = 0;
    int maxO = 0, maxE = 0;
    int checkE = 0;
    int checkO = 0;
    for(i = 0; i < count; i+=2){
        if(x[i] % 2 == 0 && x[i+1] % 2 == 1 && x[i+1] > 0){
            countZigOdd = 0;
            countZigEven++;
            if(checkE == 0){
                maxE = countZigEven;
                checkE = 1;
            }
            else if(maxE < countZigEven)
                maxE = countZigEven;
        }
        else if(x[i] % 2 == 1 && x[i+1] % 2 == 0 && x[i+1] > 0){
            countZigEven = 0;
            countZigOdd++;
            if(checkO == 0){
                maxO = countZigOdd;
                checkO = 1;
            }
            else if(maxO < countZigOdd)
                maxO = countZigOdd;
        }
        else{
            countZigEven = 0;
            countZigOdd = 0;
        }
    }


    if(maxE > maxO)
        printf("%d", maxE);
    else
        printf("%d", maxO);
    return 0;
}
/*
1. input break at 0 or -1
2. for(i = 0; i < count; i+=2)
      if(x[ i ] % 2  == 0 && x[i+1] % 2 == 1)
             countZigOdd = 0;
             countZigEven++;
             if(checkE == 0)
                  countZigEven = maxE;
                  checkE = 1;
             else if(maxE < countZigEven)
                     maxE = countZigEven;
      else if(x[ i ] % 2 == 1 && x[i+1] % 2 == 0)
               countZigEven = 0
               countZigOdd ++;
               if(checkO == 0)
                     countZigOdd = maxO
                     checkO = 1;
              else if(maxO < countZigOdd)
                     maxO = countZigOdd;

*/
