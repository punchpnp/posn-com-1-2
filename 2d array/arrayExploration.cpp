#include<bits/stdc++.h>
using namespace std;
int main(){
    int R, C;
    cin >> R >> C;
    int i, j, c;
    int x[R+1][C+1];
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            cin >> x[i][j];
        }
    }
    int n;
    cin >> n;
    int a, b;
    int countPo = 0, countNe = 0;
    int countE = 0, countO = 0;
    for(c = 1; c <= n; c++){
        cin >> a >> b;
        if(a >= 1 && a <= R && b >= 1 && b <= C){
            if(x[a][b] > 0)
                countPo++;
            else if(x[a][b] < 0)
                countNe++;
            if(abs(x[a][b]) % 2 == 0)
                countE++;
            else if(abs(x[a][b]) % 2 == 1)
                countO++;
        }
    }
    cout << countPo << " ";
    cout << countNe << " ";
    cout << countE << " ";
    cout << countO ;
    return 0;
}
