#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,target[6],guess[6],num,gnum,temp;
	for(i=0;i<6;i++){
		target[i]=rand() % 10;
	}
	scanf("%d",&gnum);
	temp=gnum;
	for(i=0;i<6;i++){
		printf("%d ",target[i]);
	}
	printf("\n");
	for(i=5;i>=0;i--){
		guess[i]=temp%10;
		temp=temp/10;
	}
	for(i=0;i<6;i++){
		printf("%d ",guess[i]);
	}
	printf("\n");
	return (0);
}
