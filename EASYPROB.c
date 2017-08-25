/*
Solution:
137=2(2(2)+2+2(0))+2(2+2(0))+2(0)
1315=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)
73=2(2(2)+2)+2(2+2(0))+2(0)
136=2(2(2)+2+2(0))+2(2+2(0))
255=2(2(2)+2+2(0))+2(2(2)+2)+2(2(2)+2(0))+2(2(2))+2(2+2(0))+2(2)+2+2(0)
1384=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2)+2(2(2)+2(0))+2(2+2(0))
16385=2(2(2+2(0))+2(2)+2)+2(0)

*/
//https://github.com/mintuhouse/spoj-solutions/blob/master/1688-easyprob.cpp
#include<stdio.h>
#include <string.h>
#include <math.h>
void func(int n);
int main(){
	int arr[]={137, 1315, 73, 136, 255, 1384, 16385};
	int i;
	//for(i=0;i<7;i++)
		func(arr[6]);		
}
void func(int n){
	int N=n;
	if(n<=3){
		if(n==3) printf("2+2(0)");
		else if(n==2) printf("2");
		else if(n==1) printf("2(0)");
		else printf("Err");
		return;
	}
	int j=0;
	while(n>0){
		j++;
		n=n/2;
	}
	int a=pow(2,j-1);
	printf("2(");
	func(j-1);
	printf(")");
	if(N-a!=0) {printf("+");func(N-a);}
}
