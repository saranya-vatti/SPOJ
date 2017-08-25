#include<stdio.h>
#include<math.h>
long long int integerAsSumOfSquares(long long int n);
int main(){
	long long int c,n,i;
	scanf("%lld",&c);
	for(i=0;i<c;i++){
		scanf("%lld",&n);
		if(integerAsSumOfSquares(n)==1) printf("Yes\n");
		else printf("No\n");
	}
	return (0);
}
long long int integerAsSumOfSquares(long long int n){
	long long int count=0,i;
	while (n%2 == 0) n = n/2;
	for (i = 3; i <= sqrt(n); i = i+2){
		count=0;
		// While i divides n, print i and divide n
		while (n%i == 0){
			if(i%4==3) count++;
			n = n/i;
		}
		if(count%2!=0) return 0;
	}
	if (n > 2 && n%4==3) return 0;
	return 1;
}
