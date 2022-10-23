#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char str[1001];
    int i, j;
    cin >> str;
    int count = 0;
    int pass = 0;

    for(;;){
        for(i = 0; i < n; i++){
            if(str[i] == 'M' && str[i+1] == 'F'){
                swap(str[i], str[i+1]);
                pass = 1;
                i++;
            }
        }
        if(pass == 1)
            count++;
        for(j = 0; j < n; j++){
            if(str[j] == 'M' && str[j+1] == 'F')
                break;
            if(n-j == 1)
                pass = 0;
        }
        if(pass == 0)
            break;
    }
    cout << count;
    return 0;
}
