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
    // check
    int ans;
    int max = INT_MIN;
    int count1 = 0;
    for(j = 1; j <= C; j++){
        for(i = 1; i <= R; i++){
            if(x[i][j] == 1){
                count1++;
            }
            if(count1 >= max && i == R){
                max = count1;
                ans = j;
            }
            if(i == R)
                count1 = 0;
        }
    }
    cout << max << endl << ans;
    return 0;
}
