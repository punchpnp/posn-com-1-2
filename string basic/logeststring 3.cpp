#include<bits/stdc++.h>
int main(){
    char x[10000];
    scanf("%[^\n] ", x);
    int len = strlen(x);
    int max = len;
    int i, j;
    char strMax[10000];
    for(j = 0; j < max; j++){
        strMax[j] = x[j];
    }
    char y[10000];
    for(i = 0; i < 4; i++){
        scanf(" %[^\n]", y);
        int len2 = strlen(y);
        if(len2 >= max){
            max = len2;
            for(j = 0; j < max; j++){
                strMax[j] = y[j];
            }
        }
    }
    for(i = 0; i < max; i++){
        printf("%c", strMax[i]);
    }
    return 0;
}
