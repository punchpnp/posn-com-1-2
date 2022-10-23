#include<cstdio>
int main(){
    int w[7], s[7];
    int i;
    for(i = 0; i < 7; i++){
        scanf("%d", &w[i]);
        scanf("%d", &s[i]);
    }
    int water = 0;
    int sugar = 0;
    for(i = 0; i < 7; i++){
        water = w[i] / 250;
        sugar = s[i] / 15;
        if(water == sugar){
            printf("%d", sugar);
            if(w[i] - (250 * water) > 0 || water > sugar)
                printf(" water");
        }
        else if(water > sugar){
            printf("%d", sugar);
            if(w[i] - (250 * water) > 0 || water > sugar)
                printf(" water");
        }
        else if(water < sugar){
            printf("%d", water);
            if(w[i] - (250 * water) > 0 || water > sugar)
                printf(" water");
        }
        printf("\n");
    }
    return 0;
}
