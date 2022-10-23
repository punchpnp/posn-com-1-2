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
    int A, B, P, Q;
    cin >> A >> B >> P >> Q;
    if(A <= 0)
        A = 1;
    else if(A > R)
        A = R;
    if(B <= 0)
        B = 1;
    else if(B > R)
        B = R;
    if(P <= 0)
        P = 1;
    else if(P > C)
        P = C;
    if(Q <= 0)
        Q = 1;
    else if(Q > C)
        Q = C;

    for(i = A; i <= B; i++){
        for(j = P; j <= Q; j++){
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
