#include<stdio.h>
#include<math.h>
int main(){
	int n,temp;
	scanf("%d",&n);
	while(n!=-1){
		temp=n-1;
		if(temp%3!=0) printf("N\n");
		else{
			temp=(int)sqrt(temp/3);
			if(temp*(temp+1) == (n-1)/3) printf("Y\n");
			else printf("N\n");
		}
		scanf("%d",&n);
	}
	return (0);
}