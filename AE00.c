#include<math.h> //when using math.h, link explicitly with gcc progname.c -lm
#include <stdio.h>
#include<stdlib.h>
//http://ajmarin.alwaysdata.net/codes/problems/826/
int main(){
	int ans[10048],i,n,j;
	for(i=1;i<10001;++i){
		ans[i]=ans[i-1];
		for(j=1;j*j<=i;j++) ans[i]+= !(i % j);
	}
	scanf("%d",&n);
	printf("%d\n",ans[n]);
	return (0);
}
