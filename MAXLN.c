#include<stdio.h>
#include<math.h>
int main(){
	int t,count=1;
	long long int r;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&r);
		printf("Case %d: %.2lf\n",count++,(4*r*r)+0.25);
	}
	return (0);
}
	
