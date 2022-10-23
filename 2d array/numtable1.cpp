#include<bits/stdc++.h>
using namespace std;
int main(){
    int R, C;
    cin >> R >> C;
    int i, j;
    int x[R+1][C+1];
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            cin >> x[i][j];
        }
    }
    int n;
    cin >> n;
    int a, b;

    for(i = 1; i <= n; i++){
        cin >> a >> b;
        if(a >= 1 && a <= R && b >= 1 && b <= C){
            cout << x[a][b];
        }
        else
            cout << "-";
    }

    return 0;
}
