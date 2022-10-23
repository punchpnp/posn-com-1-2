#include<cstdio>
int main(){
    float sumB = 0, countB = 0, sumG = 0, countG = 0;
    float sum = 0, count = 0;
	float x[100], y[100];
    int i;
    // boy input
    for(i = 0; ; i++){
    	scanf("%f", &x[i]);
    	if(x[i] < 0)
    		break;
    	sumB = sumB + x[i];
    	countB++;
    	sum = sum + x[i];
    	count++;
	}
	// girl input
	for(i = 0; ; i++){
    	scanf("%f", &y[i]);
    	if(y[i] < 0)
    		break;
    	sumG = sumG + y[i];
    	countG++;
    	sum = sum + y[i];
    	count++;
	}

	printf("%.2f ", sumB/countB);
	printf("%.2f ", sumG/countG);
	printf("%.2f\n", sum/count);

	// boy < mean score
	int minB = 0;
	for(i = 0; i < countB; i++){
		if(x[i] < sum/count)
			minB++;
	}
	printf("%d ", minB);
	printf("%.0f ", countB-minB);
	// girl < mean score
	int minG = 0;
	for(i = 0; i < countG; i++){
		if(y[i] < sum/count)
			minG++;
	}
	printf("%d ", minG);
	printf("%.0f ", countG - minG);

	// all
	printf("%d ", minB + minG);
	printf("%.0f", count - (minB + minG));
    return 0;
}
