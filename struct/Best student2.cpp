#include<bits/stdc++.h>
using namespace std;
struct student{
    char id[1000];
    int score;
};
int main(){
    int n;
    int t;
    cin >> n;
    cin >> t;
    student s[n], point[t];
    int i, j;

    int max = INT_MIN;
    int sum[n] = {};

    for(i = 0; i < n; i++){
        cin >> s[i].id;
        for(j = 0; j < t; j++){
            cin >> point[j].score;
            sum[i] = sum[i] + point[j].score;
        }

        if(sum[i] >= max){
            max = sum[i];
        }
    }

    cout << max << endl;
    for(i = 0; i < n; i++){
        if(sum[i] == max)
            cout << s[i].id << endl;
    }

    return 0;
}
