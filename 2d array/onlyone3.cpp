/*
1. if R_input > R  ==> R_input == R
   if R_input <= 0 ==> R_input == 1
2. if C_input > C  ==> C_input == C
   if C_input <= 0 ==> C_input == 1
count1++
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int R, C;
    cin >> R >> C;
    int i, j;
    int x[R+1][C+1];
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            cin >> x[i][j];
        }
    }
    int inR, inC;
    cin >> inR >> inC;

    // check inR, inC
    if(inR > R)
        inR = R;
    else if(inR <= 0)
        inR = 1;
    if(inC > C)
        inC = C;
    else if(inC <= 0)
        inC = 1;

    // high light
    int count1 = 0;
    if(x[inR][inC] == 1){
        for(int i = 1; i <= C; i++){
            if(x[inR][i] == 1)
                count1++;
        }
        for(int i = 1; i <= R; i++){
            if(x[i][inC] == 1)
                count1++;
        }
        count1--;
    }
    else{
        for(int i = 1; i <= C; i++){
            if(x[inR][i] == 1)
                count1++;
        }
        for(int i = 1; i <= R; i++){
            if(x[i][inC] == 1)
                count1++;
        }
    }

    cout << count1;


    return 0;
}
