#include<bits/stdc++.h>
using namespace std;
int main(){
    int R;
    cin >> R;
    int i, j;
    int c = 1;
    int newc = c;
    for(i = 1; i <= R; i++){
        for(j = 1; j <= R; j++){
            if(c > R){
                c = 1;
                newc = 1;
            }
            cout << newc << " ";
            c++;
            newc = c % 10;
        }
        c--;
        newc = c % 10;
        cout << endl;
    }
    return 0;
}
