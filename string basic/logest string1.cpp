#include<bits/stdc++.h>
int main(){
    int i;
    int max = INT_MIN;
    char x[10000];
    for(i = 0; i < 5; i++){
        gets(x);
        int len = strlen(x);
        if(len > max)
            max = len;
    }
    printf("%d", max);
    return 0;
}
