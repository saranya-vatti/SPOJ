#include <stdio.h>
#include<stdlib.h>
int main(){
	long long int n,t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld\n", (n*(n+2)*(2*n + 1))/8);
	}
	return (0);
}
