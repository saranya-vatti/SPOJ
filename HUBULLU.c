#include<stdio.h>
int main(){
	int t,n,p;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&p);
		if(p==0) printf("Airborne wins.\n");
		else printf("Pagfloyd wins.\n");
	}
	return (0);
}