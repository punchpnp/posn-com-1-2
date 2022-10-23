#include<bits/stdc++.h>
using namespace std;
int countR[1000] = {};
int main(){
    int num;
    cin >> num;
    int n;
    cin >> n;
    int i, j;
    int x[n+1];
    for(i = 1; i <= n; i++){
        cin >> x[i];
    }
    // compare
    for(j = 1; j <= num; j++){
        for(i = 1; i <= n; i++){
            if(j == x[i])
                countR[j]++;
        }
    }
    int max = INT_MIN;
    int ans;
    for(j = 1; j <= num; j++){
        if(countR[j] > max){
            max = countR[j];
            ans = j;
        }
    }

    cout << ans << endl;
    cout << max ;

    return 0;
}
