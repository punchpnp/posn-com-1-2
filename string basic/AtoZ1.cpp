#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[10000];
    cin >> str;
    int len = strlen(str);
    int i;
    int memA = 0, memZ = 0;
    for(i = 0; i < len; i++){
        if('A' == str[i])
            memA = i+1;
        else if('Z' == str[i])
            memZ = i+1;
    }
    //check
    //cout << memA << " " << memZ << endl;

    if(memA < memZ){
        for(i = memA-1; i < memZ; i++){
            cout << str[i];
        }
    }
    else{
        for(i = memA-1; i >= memZ-1; i--){
            cout << str[i];
        }
    }
    return 0;
}
