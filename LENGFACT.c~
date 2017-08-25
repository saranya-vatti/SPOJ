#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846
#define E 2.71828182845904523536
int main(){
	int t;
	unsigned long long int x;
	double ans;
	scanf("%d",&t);
	while(t--){
		scanf("%llu",&x);
		if(x<3) ans=1;
		// striling's approximation
		else ans=floor((x*log(x)-x+(log(2.0*M_PI*x))/2.0)/log(10.0))+1.0;
		printf ("%.0f\n",ans + 1e-12);	
	}
	return (0);
}
