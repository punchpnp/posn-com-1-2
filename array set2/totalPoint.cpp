#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i, j;
    int sum[1000] = {};
    int num[n], score[n];
    int scoreMax[1000] = {};
    for(i = 0; i < n; i++){
        cin >> num[i] >> score[i];
        if(num[i] % 2 == 1){ // Odd
            for(j = 1; j <= 13; j+=2){
                if(num[i] == j){
                    if(score[i] > scoreMax[j]){
                        sum[j] = score[i];
                        scoreMax[j] = score[i];
                    }
                }
            }
        }
    }

    int sumAll = 0;
    for(j = 1; j <= 13; j++){
        //cout << sum[j] << endl;
        sumAll = sumAll + sum[j];
    }
    cout << sumAll;
    return 0;
}
