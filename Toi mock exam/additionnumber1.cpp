#include<cstdio>
int main(){
    int i;

    int n1;
    scanf("%d", &n1);
    int num1[n1+1];
    for(i = 1; i <= n1; i++){
        scanf("%d", &num1[i]);
    }

    int n2;
    scanf("%d", &n2);
    int num2[n2+1];
    for(i = 1; i <= n2; i++){
        scanf("%d", &num2[i]);
    }
    int sum;
    int array[n2+1];
    int special = 0;
    for(i = n2; i >= 1; i--){ // n1 == n2
        sum = num1[i] + num2[i] + special;
        special = 0;
        if(sum >= 10){
            if(i == 1){
                array[i] = sum;
                break;
            }
            array[i] = sum % 10;
            special = sum / 10;
        }
        else // sum < 10
            array[i] = sum; // array[n]
    }
    for(i = 1; i <= n2; i++){
        printf("%d", array[i]);
    }
    return 0;
}
