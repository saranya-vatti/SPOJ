#include <stdio.h>
int main(){
	int g,b;
	scanf("%d %d",&g,&b);
	while(g!=-1 && b!=-1){
		if(g==0) printf("%d\n",b);
		else if(b==0) printf("%d\n",g);
		else if(g==b){
			printf("%d\n",1);
		}
		else if(g>b){
			if(g%(b+1)==0) printf("%d\n",g/(b+1));
			else printf("%d\n",(g/(b+1))+1);
		}
		else if(g<b){
			if(b%(g+1)==0) printf("%d\n",b/(g+1));
			else printf("%d\n",(b/(g+1))+1);
		}
		scanf("%d %d",&g,&b);
	}
	return (0);
}
