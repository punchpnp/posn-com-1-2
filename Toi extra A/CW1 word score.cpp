#include<bits/stdc++.h>

int main(){
    int n;
    scanf("%d", &n);
    char x[100000];
    int i, j;
    int sum = 0;
    for(i = 0; i < n; i++){
        scanf("%s", x);
        int len = strlen(x);
        //printf("%d", len);
        for(j = 0; j < len; j++){
            //printf("%c ", x[j]);
            if(x[j] == '\0' || x[j] == '?')
                sum = sum + 0;
            else if(x[j] == 'D' || x[j] == 'G')
                sum = sum + 2;
            else if(x[j] == 'B' || x[j] == 'C' || x[j] == 'M' || x[j] == 'P')
                sum = sum + 3;
            else if(x[j] == 'F' || x[j] == 'H' || x[j] == 'V' || x[j] == 'W' || x[j] == 'Y')
                sum = sum + 4;
            else if(x[j] == 'K')
                sum = sum + 5;
            else if(x[j] == 'J' || x[j] == 'X')
                sum = sum + 8;
            else if(x[j] == 'Q' || x[j] == 'Z')
                sum = sum + 10;
            else if(x[j] >= 'A' && x[j] <= 'Z')
                sum = sum + 1;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
