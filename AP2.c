#include <stdio.h>
int main(){
	long long int t,thterm,thlastterm,sum,a,n,i,d;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld %lld",&thterm,&thlastterm,&sum);
		n=(2*sum)/(thterm+thlastterm);
		d=((thlastterm-thterm)*(thterm+thlastterm))/((2*sum)-(5*(thlastterm+thterm)));
		a=thterm-(2*d);
		printf("%lld\n",n);
		for(i=1;i<=n;i++)
			printf("%lld ",(a+((i-1)*d)));
		printf("\n");
	}
	return (0);
}
