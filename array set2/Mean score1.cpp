#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    float scoreBoy[1000], scoreGirl[1000];
    int countB = 0, countG = 0, countAll = 0;
    float sumBoy = 0, sumGirl = 0, sumAll = 0;
    // boy
    for(i = 1; ;i++){
        cin >> scoreBoy[i];
        if(scoreBoy[i] < 0)
            break;
        countB++;
        countAll++;
        sumBoy = sumBoy + scoreBoy[i];
        sumAll = sumAll + scoreBoy[i];
    }

    // girl
    for(i = 1; ;i++){
        cin >> scoreGirl[i];
        if(scoreGirl[i] < 0)
            break;
        countG++;
        countAll++;
        sumGirl = sumGirl + scoreGirl[i];
        sumAll = sumAll + scoreGirl[i];
    }

    float meanB = sumBoy / countB;
    float meanG = sumGirl / countG;
    float meanAll = sumAll / countAll;
    cout << fixed << setprecision(2) << meanB << " ";
    cout << fixed << setprecision(2) << meanG << " ";
    cout << fixed << setprecision(2) << meanAll << endl;

    // ans 2 Boy
    int minB = 0, minG = 0;
    int all = 0;
    for(i = 1; i <= countB; i++){
        if(scoreBoy[i] < meanB)
            minB++;
        if(scoreBoy[i] < meanAll)
            all++;
    }
    // ans 2 Girl
    for(i = 1; i <= countG; i++){
        if(scoreGirl[i] < meanG)
            minG++;
        if(scoreGirl[i] < meanAll)
            all++;
    }
    cout << minB << " " << countB - minB << " ";
    cout << minG << " " << countG - minG << " ";

    cout << all << " " << countAll - all;
    return 0;
}
