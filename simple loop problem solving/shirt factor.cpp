#include<cstdio>
int main(){
    int price;
    scanf("%d", &price);
    int x[7];
    int i;
    int sumShirt = 0;
    for(i = 0; i < 7; i++){
        scanf("%d", &x[i]);
        sumShirt = sumShirt + x[i];
    }
    int sum = 0;
    if(sumShirt < 100)
        sum = sumShirt * 80;

    else if(sumShirt < 250)
        sum = (100*80) + ( (sumShirt-100)*70 );

    else
        sum = (100*80) + (150*70) + ((sumShirt - 250)*60);
    int sumGet = sumShirt * price;
    printf("%d\n", sum);
    printf("%d\n", sumGet);

    if(sumGet > sum)
        printf("%d", sumGet - sum);
    else
        printf("No Profit");
    return 0;
}
