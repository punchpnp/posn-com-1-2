#include<bits/stdc++.h>
using namespace std;
struct country{
    int id;
    int gold;
    int silver;
    int bronze;
    int sum = 0;

};
int main(){
    int n;
    cin >> n;
    country s[n];
    int i, j;
    int maxG = INT_MIN;
    int maxS = INT_MIN;
    int maxB = INT_MIN;
    int maxSum = INT_MIN;
    int maxSum_id = INT_MIN;

    int c = 0;
    int coin[1000];

    for(i = 0; i < n; i++){
        cin >> s[i].id;
        cin >> s[i].gold;
        cin >> s[i].silver;
        cin >> s[i].bronze;
        s[i].sum = s[i].gold + s[i].silver + s[i].bronze;
        if(s[i].gold > 0 || s[i].silver > 0 || s[i].bronze > 0){
            coin[c] = s[i].id;
            c++;
        }
        if(s[i].sum > maxSum){
            maxSum = s[i].sum;
            maxSum_id = s[i].id;
        }
        if(s[i].gold > maxG)
            maxG = s[i].gold;

        if(s[i].silver > maxS)
            maxS = s[i].silver;

        if(s[i].bronze > maxB)
            maxB = s[i].bronze;
    }
    int num;
    int pass = 0;
    for(j = 0; ; j++){
        cin >> num;
        if(num <= 0){
            cout << "good bye";
            break;
        }

        // if 1001 == > maxG
        else if(num == 1001){
            for(int i = 0; i < n; i++){
                if(s[i].gold == maxG)
                    cout << s[i].id << " ";
            }
            cout << endl;
            pass = 1;
        }
        else if(num == 1002){
            for(int i = 0; i < n; i++){
                if(s[i].silver == maxS)
                    cout << s[i].id << " ";
            }
            cout << endl;
            pass = 1;
        }
        else if(num == 1003){
            for(int i = 0; i < n; i++){
                if(s[i].bronze == maxB)
                    cout << s[i].id << " ";
            }
            cout << endl;
            pass = 1;
        }
        else if(num == 2000){
            cout << maxSum_id << endl;
            pass = 1;
        }

        else if(num == 3000){
            for(int i = 0; i < c; i++){
                cout << coin[i] << " ";
            }
            cout << endl;
            pass = 1;
        }
        else{
            // id country
            pass = 0;
            for(int k = 0; k < n; k++){
                if(num == s[k].id){
                    pass = 2;
                    cout << s[k].gold << " ";
                    cout << s[k].silver << " ";
                    cout << s[k].bronze << " ";
                    cout << s[k].sum << endl;
                }
            }
        }
        if(pass == 0)
            cout << "invalid code" << endl;
    }

    return 0;
}
