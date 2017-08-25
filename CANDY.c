#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,c[10000],temp,move=0,sum=0,i,j,flag,numcandy,greaterpacks;
	scanf("%d",&n);
	while(n!=-1){
		move=0;sum=0;flag=0;
		for(i=0;i<n;i++){
			scanf("%d",&c[i]);
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(c[j]<c[i]){
					temp=c[j];
					c[j]=c[i];
					c[i]=temp;
				}
			}
		}
		for(i=0;i<n;i++){
			sum+=c[i];
		}
		numcandy=sum/n;
		greaterpacks=0;
		if(sum%n==0){
			for(i=0;i<n;i++){
				if(c[i]>numcandy) greaterpacks++;
			}
			for(i=n-1;i>=n-greaterpacks;i--){
				move=move+(c[i]-numcandy);
			}
		}
		else move=-1;
		printf("%d\n",move);
		scanf("%d",&n);
	}
	return (0);
}
