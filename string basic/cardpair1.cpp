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
    char max1, max2, maxDou1, maxDou2;
    int pass1 = 0, pass2 = 0;
    for(i = 0; i < 5; i++){
        pass1 = 0;
        pass2 = 0;
        cin >> s1.x >> s1.y;
        if(s1.x < s1.y)
            max1 = s1.x;
        else if(s1.x > s1.y)
            max1 = s1.y;
        else{
            pass1 = 1;
            max1 = s1.x;
        }

        cout << max1 << endl;
        cout << pass1 << endl;
        cin >> s2.x >> s2.y;
        if(s2.x < s2.y)
            max2 = s2.x;
        else if(s2.x > s2.y)
            max2 = s2.y;
        else{
            pass2 = 1;
            max2 = s2.x;
        }
        cout << max2 << endl;
        cout << pass2 << endl;
        if(pass1 == 1 && pass2 == 1){
            if(max1 == max2)
                cout << "D";
            else if(max1 < max2)
                cout << "W";
            else
                cout << "L";
        }
        else if(pass1 == 1)
            cout << "W";
        else if(pass2 == 1)
            cout << "L";
        else{
            if(max1 == max2)
                cout << "D";
            else if(max1 < max2)
                cout << "W";
            else
                cout << "L";
        }

    }
    return 0;
}
