#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n!=0){
		printf("%d\n",((n*(n+1)*((2*n)+1))/6));
		scanf("%d",&n);
	}
	return (0);
}
