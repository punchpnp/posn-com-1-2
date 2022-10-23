#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, j;
    int n;
    cin >> n;
    int x[n];
    for(i = 0; i < n; i++){
        cin >> x[i];
    }
    int k;
    cin >> k;
    int y[k];
    for(j = 0; j < k; j++){
        cin >> y[j];
    }
    int c = k;
    int special = 0;
    int ans[100];
    if(n > k){
        for(i = n-1; i >= 0; i++){
            x[i] = x[i] + special;
            if(i == 0){
                for(j = 0; j < n; j++){
                    cout << ans[j];
                }
            }
            if(c < 0){
                ans[i] = x[i];
                if(ans[i] >= 10 && i != 0){
                    ans[i] = ans[i] % 10;
                    special = 1;
                }
            }
            else{
                ans[i] = x[i] + y[c];
                if(ans[i] >= 10){
                    ans[i] = ans[i] % 10;
                    special = 1;
                }
            }
            c--;
        }
    }

    else{
        for(i = k-1; i >= 0; i++){
            y[i] = y[i] + special;
            if(i == 0){
                for(j = 0; j < k; j++){
                    cout << ans[j];
                }
            }
            if(c < 0){
                ans[i] = y[i];
                if(ans[i] >= 10 && i != 0){
                    ans[i] = ans[i] % 10;
                    special = 1;
                }
            }
            else{
                ans[i] = y[i] + x[c];
                if(ans[i] >= 10){
                    ans[i] = ans[i] % 10;
                    special = 1;
                }
            }
            c--;
        }
    }


    return 0;
}
