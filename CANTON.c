#include<math.h> //when using math.h, link explicitly with gcc progname.c -lm
#include <stdio.h>
#include<stdlib.h>
//http://ajmarin.alwaysdata.net/codes/problems/791/
int main(){
	int t,i,top,u,n;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		top= (int)(ceil(-.5 + sqrt(1 + (n << 3))/2));
		u = (top * (top + 1)) >> 1;
        	if(top & 1) printf("TERM %d IS %d/%d\n", n, 1 + u - n, n - u + top);
        	else printf("TERM %d IS %d/%d\n", n, n - u + top, 1 + u - n);
	}
	return (0);
}
