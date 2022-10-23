#include<bits/stdc++.h>
using namespace std;
int x[1000000];
int main(){
    int n;
    cin >> n;
    int i;

    for(i = 0; i < n*2; i++){
        cin >> x[i];
    }
    int countEven = 0;
    int countOdd = 0;
    int powerE = n;
    int powerO = n;
    for(i = 0; i < n*2; i++){
        // Even start
        if(x[i] % 2 == 0){
            countOdd = 0;
            countEven++;
            if(countEven >= 3)
                powerO = powerO - 3;
            else if(countEven < 3)
                powerO--;
            if(powerO <= 0){
                cout << "0" << endl;
                cout << x[i] ;
                break;
            }
        }
        // Odd start
        else{
            countEven = 0;
            countOdd++;
            if(countOdd >= 3)
                powerE = powerE - 3;
            else if(countOdd < 3)
                powerE--;
            if(powerE <= 0){
                cout << "1" << endl;
                cout << x[i] ;
                break;
            }
        }
    }

    return 0;
}
