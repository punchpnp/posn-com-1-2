#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x[1000];
    int y[1000];
    int i, j = 0;
    for(i = 0; i < n; i++){
        cin >> x[i];
    }

    // reverse
    for(i = n-1; i >= 0; i--){
        y[j] = x[i];
        //cout << y[j] << " ";
        j++;
    }
    // sum
    int special = 0;
    int ans[1000];
    for(i = n-1; i >= 0; i--){
        ans[i] = y[i] + x[i] + special;
        special = 0;
        if(ans[i] >= 10 && i != 0){
            ans[i] = ans[i] % 10;
            special = 1;
        }
    }

    for(i = 0;i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
