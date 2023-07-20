#include<stdio.h>
intmain() {
	int number,total,avg,cnt = 1;
	printf("enter number :");
	scanf("%d",&total);
	while(total>0){
		printf("enter number :");
		scanf("%d",&a);
		cnt++;
		total = total + number;
		avg = total / cnt;
		printf("summation =\n",total);
		printf("average =\n"avg);
		if(number<=0){
		   break;
		}
	}
}

