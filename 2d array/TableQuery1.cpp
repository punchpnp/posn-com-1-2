#include<bits/stdc++.h>
using namespace std;
int main(){
    int R, C;
    int i, j;
    cin >> R >> C;
    int x[R+1][C+1];
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            cin >> x[i][j];
        }
    }
    int T, Q;
    cin >> T >> Q;
    if(T == 1){ // focus i R
        if(Q >= 1 && Q <= R){
            i = Q;
            for(j = 1; j <= C; j++){
               cout << x[i][j] << " ";
            }
        }
        else
            cout << "invalid Q";
    }
    else if(T == 2){ // focus j C
        if(Q >= 1 && Q <= C){
            j = Q;
            for(i = 1; i <= R; i++){
               cout << x[i][j] << endl;
            }
        }
        else
            cout << "invalid Q";
    }
    return 0;
}
