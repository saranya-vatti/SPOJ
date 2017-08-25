#include <stdio.h>
main(){
	int x,y,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&x,&y);
		if(x==y){
			if(x%2==0) printf("%d\n",(x*2));
			else printf("%d\n",((x*2)-1));
		}
		else if(y==(x-2)){
			if(x%2==0) printf("%d\n",((x/2)*4)-2);
			else printf("%d\n",(((x/2)*4)-1));
		}
		else printf("No Number\n");
	}
}
