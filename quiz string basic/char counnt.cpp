#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[101];
    int i, j;
    cin >> str;
    int count[1000] = {};
    int len = strlen(str);
    for(j = 0; j < len; j++){
        for(i = 0; i < 26; i++){
            if(str[j] == 'A' + i)
                count[i]++;
        }
    }
    for(i = 0; i < 26; i++){
        if(count[i] > 0){
            printf("%c %d\n", 'A' + i, count[i]);
        }
    }
    return 0;
}
