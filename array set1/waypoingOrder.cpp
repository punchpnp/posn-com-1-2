#include<bits/stdc++.h>
using namespace std;
int x[101][101] = {};
int main(){
    int R, C;
    cin >> R >> C;
    int n;
    cin >> n;

    int i, j;
    int a, b;

    for(i = 1; i <= n; i++){
        cin >> a >> b;
        x[a][b] = i;
    }

    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
