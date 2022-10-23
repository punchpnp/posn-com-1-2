#include<bits/stdc++.h>
int main(){
    int n;
    scanf("%d", &n);
    char column, row, x;
    int i;
    int score = 0;
    for(i = 0; i < n; i++){
        scanf("%c\n", &column);
        scanf("%c\n", &row);
        scanf("%c\n", &x);
        // check score by cross word 1
        printf("%c\n", x);
        if(x == '\0' || x == '?')
            score = 0;
        else if(x == 'D' || x == 'G')
            score = 2;
        else if(x == 'B' || x == 'C' || x == 'M' || x == 'P')
            score = 3;
        else if(x == 'F' || x == 'H' || x == 'V' || x == 'W' || x == 'Y')
            score = 4;
        else if(x == 'K')
            score = 5;
        else if(x == 'J' || x == 'X')
            score = 8;
        else if(x == 'Q' || x == 'Z')
            score = 10;
        else if(x >= 'A' && x <= 'Z')
            score = 1;
        printf("%d", score);
    }
    return 0;
}
