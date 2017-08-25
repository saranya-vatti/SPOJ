#include <stdio.h> 
#include <stdlib.h>
int reverse(int num);
main(){
	int n,one,two,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&one,&two);
		printf("%d\n",reverse(reverse(one)+reverse(two)));
	}
	return (0);
}
int reverse(int num){
	int rev=0;
	while (num != 0)
	{
		rev = rev * 10;
		rev = rev + num%10;
		num = num/10;
	}
	return rev;
}
