#include <stdio.h>
#include <stdlib.h>
//http://ajmarin.alwaysdata.net/codes/problems/778/
void poss(int num);
int main(){
	int num;
	scanf("%d",&num);
	poss(num);
	return(0);
}
void poss(int num){
	if(num==0) return;
	int arr[num],i,stack[1024],top=0,want=1,z,ok=1;
	for(i=0;i<num;++i){
		scanf("%d",&z);
		if(z!=want){
			while( top && stack[top-1] == want){
				++want;
				--top;
			}
			if(!top || stack[top-1] > z) stack[top++] = z;
			else ok=0;
		} else ++want;
	}
	if(ok) printf("yes\n");
	else printf("no\n");
	scanf("%d",&num);
	poss(num);
}
