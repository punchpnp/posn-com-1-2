#include<bits/stdc++.h>
using namespace std;
struct person{
    char id[6];
    char str[6];
    int score;
};
int main(){
    int n;
    cin >> n;
    person s[n];
    int i;
    float sum = 0;

    float N = n;

    for(i = 0; i < n; i++){
        cin >> s[i].id;
        cin >> s[i].score;
        sum = sum + s[i].score;
    }
    //cout << sum << endl;
    float aver = sum / N;
    //cout << aver << endl;

    int c = 0;
    int count = 0;
    for(i = 0; i < n; i++){
        if(s[i].score >= aver){
            count++;
            strcpy(s[c].str, s[i].id);
            c++;
        }
    }
    cout << count << endl;
    for(i = 0; i < c; i++){
        cout << s[i].str << endl;
    }
    return 0;
}
