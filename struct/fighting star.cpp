#include<bits/stdc++.h>
using namespace std;
struct fighter{
    char name[31];
};
int main(){
    fighter s[9];
    int i, j;
    for(i = 1; i <= 8; i++){
        cin >> s[i].name;
    }
    int n;
    cin >> n;
    int vote[10001];
    int count[9] = {};
    for(j = 1; j <= n; j++){
        cin >> vote[j];
        for(i = 1; i <= 8; i++){
            if(vote[j] == i){
                count[i]++;
            }
        }
    }
    int min = INT_MAX;
    for(i = 1; i <= 8; i++){
        //cout << count[i] << " ";
        if(count[i] <= min)
            min = count[i];
    }
    for(i = 1; i <= 8; i++){
        if(count[i] != min)
            cout << s[i].name << endl;
    }
    return 0;
}
