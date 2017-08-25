#include <stdio.h>
#include <math.h>
int main(){
	char a[1000],b[20];
	int i=0,j=0;
	scanf("%s %s",a,b);
	while(a[i++]!='\0');
	while(b[j++]!='\0');
	printf("%d\n",i);
	return (0);
}
	
