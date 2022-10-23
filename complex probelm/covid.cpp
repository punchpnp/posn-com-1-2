// I think it should struct
#include<bits/stdc++.h>
using namespace std;
char str[10000];
int bed[1000000];
int main(){
    int bed = 0;
    int track, num;
    int c = 0;
    for(;;){
        cin >> str;
        if(strcmp("exit", str) == 0)
            break;
        else if(strcmp("area", str) == 0){
            cin >> track;
            cin >> num;
            // area keep track id
            bed[track] = bed[track] + num;
        }
        else if(strcmp("bed", str) == 0){
            cin >> track;
            cin >> num;
        }
    }


/*
    char y[1000];
    cin >> y;
    if(strcmp("Hello",y) == 0)
        cout << "yes";
    else
        cout << "no";
*/
    return 0;
}
