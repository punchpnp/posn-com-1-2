#include<cstdio>
int main(){
    int n1;
    scanf("%d", &n1);
    int i, j;
    int num1[n1];
    for(i = 0; i < n1; i++){
        scanf("%d", &num1[i]);
    }
    int n2;
    scanf("%d", &n2);
    int num2[n2];
    for(i = 0; i < n2; i++){
        scanf("%d", &num2[i]);
    }
    // n1 > n2
    int special = 0;
    int array[1000];
    int sum;
    if(n1 > n2){
        for(i = n1-1; i > 0; i--){
            for(j = n2-1; j > 0; j--){
                sum = num1[i] + num2[j] + special;
                special = 0;
                if(sum >= 10){
                    if(i == 1){ // case n1 = n2
                        array[i] = sum;
                        break;
                    }
                array[i] = sum % 10;
                special = sum / 10;
                }
                else // sum < 10
                    array[i] = sum; // array[n]
            }
            array[i] = num1[i];
        }
    }

    // n2 > n1
    else{
        for(i = n2-1; i > 0; i--){
            for(j = n1-1; j > 0 ; j--){
                sum = num2[i] + num1[j] + special;
                special = 0;
                if(sum >= 10){
                    if(i == 1){ // case n1 = n2
                        array[i] = sum;
                        break;
                    }
                array[i] = sum % 10;
                special = sum / 10;
                }
                else // sum < 10
                    array[i] = sum; // array[n]
            }
            array[i] = num2[i];
        }
    }
    for(i = 0; ; i++){
        printf("%d", array[i]);
        if(array[i] == 0)
            break;
    }
    return 0;
}
