#include <stdio.h>
int main(){
	long long int t,3term,3LastTerm,sum,a,n;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld %lld",3term,3LastTerm,sum);
		a=3term-4;
		n=((3LastTerm-a)/2)+3;	
		printf("%d\n",n);
		for(i=1;i<=n;i++)
			printf("%lld ",(a+((i-1)*2)));
		printf("\n");
	}
	return (0);
}
