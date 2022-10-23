#include<bits/stdc++.h>
int main(){
    /*
    1. first is max all
    2. next more? if more max = next
    */
    char id[8];
    char name[30];
    char last[50];

    int n;
    scanf("%d", &n);
    float grade[n];
    int i, j;
    int check = 0;
    int max = 0;
    for(i = 0; i < n; i++){
        scanf("%s ", &id);
        scanf("%s ", &name);
        scanf("%s ", &last);
        scanf("%f", &grade[i]);
        // keep max
        if(check == 0){
            max = grade[i];
            int lenID = strlen(id);
            // keep id in array
            for(j = 0; j < lenID; j++){
                maxID[j] = id[i];
            }
            int lenName = strlen(name);
            // keep name in array
            for(;;){
                maxName[j]
            }
            // keep last name in array
            // keep grade
            check = 1;
        }
    }

    return 0;
}
