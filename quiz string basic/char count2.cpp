#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    scanf("%d ", &k);
    char str[101];
    int i, j;
    int count[1000] = {};
    int pass = 0;
    char ans;
    int ans2;
    int c = 0;
    for(;;){
        c++;
        gets(str);
        int len = strlen(str);

        if(len == 0)
            break;
        for(i = 0; i < len; i++){
            for(j = 0; j < 26; j++){
                if(str[i] == 'A' + j){
                    count[j]++;
                    if(count[j] == k && pass == 0){
                        ans = str[i];
                        ans2 = c;
                        pass = 1;
                    }
                }
            }
        }
    }
    cout << ans << endl << ans2;
    return 0;
}
/*
5
ZEBRA
LOOKSLIKE
HORSE
INTEL
AMD
NVIDIA
ARM
QUALCOMM

3
ABATE
COTTAGE
PICO
MICRO
ALGEBRA
*/
