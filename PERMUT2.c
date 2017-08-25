#include <stdio.h>
int main(){
	unsigned long long int pos[100000],inp[100000],i,n;
	int flag=0;
	scanf("%llu",&n);
	while(n!=0){
		flag=0;
		for(i=0;i<n;i++){
			scanf("%llu ",&inp[i]);
		}
		for(i=0;i<n;i++){
			pos[inp[i]-1]=i+1;
		}
		for(i=0;i<n;i++){
			if(pos[i]!=inp[i]){
				flag=1;
				break;
			}
		}
		if (flag==0) printf("ambiguous\n");
		else printf("not ambiguous\n");
		scanf("%llu",&n);
	}
	return(0);
}
