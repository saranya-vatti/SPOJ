//shud use DP for optimal
//Try 6 98 98 98 98 1 99 , correct is 1865 
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int v[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
	int head,tail;
	int age=0;
	int revenue=0;
	for(head=0,tail=n-1;head<=tail;){
		age++;
		if(v[head]>v[tail]){
			revenue+=v[tail]*age;tail--;
		}
		else {
			revenue+=v[head]*age;head++;
		}
	}
	printf("%d\n",revenue);
	return (0);
}
