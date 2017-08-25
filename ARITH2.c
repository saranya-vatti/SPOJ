#include <stdio.h>
#include <string.h>
int main(){
	int t,ans,num;
	char ch;
	scanf("%d",&t);
	while(t--){
		ch=' '	;
		scanf("%d",&num);
		ans = num;
		while(ch != '='){
			scanf("%c",&ch);
			if(ch=='=') break;
			while(ch!= '+' && ch != '-' && ch != '*' && ch != '/' && ch != '=') 
				scanf("%c",&ch);
			if(ch!='='){
				scanf("%d",&num);
				if(ch=='+') ans = ans+num;
				else if(ch == '-') ans = ans-num;
				else if(ch=='*') ans = ans*num;
				else if(ch=='/') ans = ans/num;
			}
		}
		printf("%d\n",ans);
	}
	return (0);
}
