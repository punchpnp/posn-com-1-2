#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char x;
    int i, j;
    int countW[1000] = {};
    int countD[1000] = {};
    int countL[1000] = {};
    for(i = 0; i < n; i++){
        for(j = 0; j < 38; j++){
            cin >> x;
            if(x == 'W'){
                countW[i]++;
            }
            else if(x == 'D'){
                countD[i]++;
            }
            else if(x == 'L'){
                countL[i]++;
            }
        }
    }

    for(i = 0; i < n; i++){
        cout << countW[i] << " ";
        cout << countD[i] << " ";
        cout << countL[i] << " ";
        cout << countW[i]*2 + countD[i]*1 << " ";
        cout << countW[i]*3 + countD[i]*1 << " ";
        cout << countW[i]*5 + countD[i]*1 - countL[i]*1;
        cout << endl;
    }
    return 0;
}
