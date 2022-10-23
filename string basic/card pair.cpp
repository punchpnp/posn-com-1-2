#include<bits/stdc++.h>
using namespace std;

struct team1{
    char x;
    char y;
};

struct team2{
    char x;
    char y;
};

int main(){
    team1 s1;
    team2 s2;
    char x, y;
    int i;
    char max1, max2;
    for(i = 0; i < 5; i++){
        cin >> s1.x >> s1.y;
        if(s1.x < s1.y)
            max1 = s1.x;
        else
            max1 = s1.y;
       // cout << max1 << endl;
        cin >> s2.x >> s2.y;
        if(s2.x < s2.y)
            max2 = s2.x;
        else
            max2 = s2.y;
        //cout << max2 << endl;
        if(max1 == max2)
            cout << "D";
        else if(max1 < max2)
            cout << "W";
        else
            cout << "L";
    }
    return 0;
}
