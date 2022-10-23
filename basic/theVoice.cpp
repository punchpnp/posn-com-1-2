#include<cstdio>
int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    int i;
    int countM = 0;
    int countF = 0;
    int sex[N], M[N], F[N];
    for(i = 0; i < N; i++){
        scanf("%d", &sex[i]);
        scanf("%d", &M[i]);
        scanf("%d", &F[i]);
    }
    for(i = 0; i < N; i++){
        if(sex[i] == 1){
            if((M[i] == 9 || M[i] == 10) && (F[i] == 9 || F[i] == 10)){
                if(countM != K){
                    printf("%d", i+1);
                    printf(" 1");
                    countM++;
                }
                else if(countF != K){
                    printf("%d", i+1);
                    printf(" 2");
                    countF++;
                }
                else
                    continue;
            }
            else if((M[i] == 9 || M[i] == 10) && countM != K){
                printf("%d", i+1);
                printf(" 1");
                countM++;
            }
            else if((F[i] == 9 || F[i] == 10) && countF != K){
                printf("%d", i+1);
                printf(" 2");
                countF++;
            }
            else
                continue;
        }
        else if(sex[i] == 2){
            if((M[i] == 9 || M[i] == 10) && (F[i] == 9 || F[i] == 10)){
                if(countF != K){
                    printf("%d", i+1);
                    printf(" 2");
                    countF++;
                }
                else if(countM != K){
                    printf("%d", i+1);
                    printf(" 1");
                    countM++;
                }
                else
                    continue;

            }
            else if((M[i] == 9 || M[i] == 10) && countM != K){
                printf("%d", i+1);
                printf(" 1");
                countM++;
            }
            else if((F[i] == 9 || F[i] == 10) && countF != K){
                printf("%d", i+1);
                printf(" 2");
                countF++;
            }
            else
                continue;
        }

        printf("\n");
    }
    return 0;
}
