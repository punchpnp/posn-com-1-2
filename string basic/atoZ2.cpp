#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[1000000];
    char ans[1000000];
    cin >> str;
    int len = strlen(str);
    int i;
    int findA = 0, findZ = 0;
    int memA = 0, memZ = 0;
    int c = 0;
    int min = INT_MAX;
    for(i = 0; i < len; i++){
        if('A' == str[i]){
            memA = i+1;
            findA = 1;
        }
        else if('Z' == str[i]){
            memZ = i+1;
            findZ = 1;
        }
        if(findA == 1 && findZ == 1){
            findA = 0;
            findZ = 0;
            //i--;
            if(memA < memZ){
                for(i = memA-1; i < memZ; i++)
                    c++;
            }
            else{
                for(i = memA-1; i >= memZ-1; i--)
                    c++;
            }

            if(c < min)
                min = c;
        }
    }
    cout << min;
    return 0;
}
