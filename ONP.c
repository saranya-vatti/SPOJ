#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
int main(){
	char rpn[400];
	int t;
	char *ptr=rpn;
	char c,op[400];
	int top=-1;
	scanf("%d",&t);
	while(t--){
		top=-1;
		scanf("%s",rpn);
		ptr=rpn;
		while(*ptr!='\0'){
			c=*ptr;
			if (c=='(')
				ptr++;
			else if (c!='+' && c!='-' && c!='/' && c!='*' && c!=')' && c!='^'){
				printf("%c",c);	
				ptr++;
			}
			else if(c!=')'){
				top++;
				op[top]=c;	
				ptr++;
			}
			else{
				printf("%c",op[top]);
				top--;
				ptr++;
			}
		}
		printf("\n");
	}
	return (0);
}
