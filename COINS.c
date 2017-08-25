// refer https://github.com/mintuhouse/spoj-solutions/blob/master/346-coins.cpp
//TLE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
unsigned long long int dp[10000000];
unsigned long long int f(unsigned long long int n){
	if(n<10000000){
		if(dp[n]!=0) return dp[n];
	}
	if(n<n/3+n/4+n/2){
		return  f(n/2)+f(n/3)+f(n/4);
	}
	else {
		if(n<10000000){
			dp[n]=n;
		}
		return n;
	}
}
int main(){
	int res=1,t=1;
	char buf[20];
	unsigned long long int n,i;
	for(i=0;i<10000000;i++){
		dp[i]=0;
	}
	while(res==1 && t++<=10){ //res,buf,fgets and sscanf for integer input till  newline
		fgets(buf, sizeof(buf), stdin);
		res=sscanf(buf,"%llu",&n);
		if(res==1)
			printf("%llu\n",f(n));
	}
	return (0);
}

