#include <stdio.h>
#include <stdlib.h>
void showsum(){
	int n,i,j,sum=0,max=0,row=0,col=0,k,temp;
	scanf("%d",&n);
	int men[n],women[n];
	for(i=0;i<n;i++)
		scanf("%d ",&men[i]);
	for(i=0;i<n;i++)
		scanf("%d ",&women[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(men[j]>men[i]){
				temp=men[j];
				men[j]=men[i];
				men[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(women[j]>women[i]){
				temp=women[j];
				women[j]=women[i];
				women[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		sum=sum+(men[i]*women[i]);
	printf("%d\n",sum);
}
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		showsum();
	}
	return (0);
}

