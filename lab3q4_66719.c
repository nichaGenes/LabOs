#include<stdio.h>
intmain() {
	int a,total,avg,cnt = 1;
	printf("enter number :");
	scanf("%d",&total);
	while(total>0){
		printf("enter number :");
		scanf("%d",&a);
		cnt++;
		total = total + a;
		avg = total / cnt;
		printf("summation =\n",total);
		printf("average =\n"avg);
		if(a<=0){
		   break;
		}
	}
}

