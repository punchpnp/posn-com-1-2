#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;
    int i;
    int a, b, c;
    for(i = 1; i <= n; i++){
        cin >> a >> b >> c;
        // sort
        if(b > a)
            swap(a,b);
        if(c > a)
            swap(a,c);
        if(c > b)
            swap(b,c);

         // check
        if(15 >= a && 10 >= b && 8 >= c && b1 != 0){
            cout << "1" << endl;
            b1--;
            continue;
        }
        if(25 >= a && 15 >= b && 12 >= c && b2 != 0){
            cout << "2" << endl;
            b2--;
            continue;
        }
        if(50 >= a && 40 >= b && 20 >= c && b3 != 0){
            cout << "3" << endl;
            b3--;
            continue;
        }
        else{
            if(a > 50 || b > 40 || c > 20){
                cout << "Oversize product" << endl;
                continue;
            }
            else if(b1 == 0 && b2 == 0 && b3 == 0)
                cout << "Box not available" << endl;
        }
    }
    return 0;
}
