#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i, j;
    int x[n];
    for(i = 0; i < n; i++){
        cin >> x[i];
    }
    int n2;
    cin >> n2;
    int y[n2];
    for(j = 0; j < n2; j++){
        cin >> y[j];
    }

    // sort x[n]
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1; j++){
            if(x[j] > x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }

    // sort y[n2]
    for(i = 0; i < n2-1; i++){
        for(j = 0; j < n2-1; j++){
            if(y[j] > y[j+1]){
                int temp = y[j];
                y[j] = y[j+1];
                y[j+1] = temp;
            }
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n2; j++){
            if(x[i] == y[j]){
                y[j] = 0;
                break;
            }
        }
    }
    for(j = 0; j < n2; j++){
        if(y[j] != 0)
            cout << y[j] << " ";
    }

    return 0;
}
