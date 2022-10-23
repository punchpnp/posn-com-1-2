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
    student s[n] , point[t];
    int i, j;

    int max = INT_MIN;
    int min = INT_MAX;
    int sum[n] = {};
    int minS[n] = {};

    for(i = 0; i < n; i++){
        min = 0;
        cin >> s[i].id;
        for(j = 0; j < t; j++){
            cin >> point[j].score;
            if(point[j].score < min){
                min = point[j].score;
                //minS[i] = min;
            }
        }
        cout << min << endl;

        for(j = 0; j < t; j++){
            if(point[j].score == min)
                continue;
            sum[i] = sum[i] + point[j].score;
            if(t-j == 1)
                sum[i] = sum[i] + min;
        }
        //cout << sum[i] << endl;
        if(sum[i] >= max)
            max = sum[i];
    }

    cout << max << endl;
    for(i = 0; i < n; i++){
        if(sum[i] == max)
            cout << s[i].id << endl;
    }
    return 0;
}
