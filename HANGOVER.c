#include<math.h> //when using math.h, link explicitly with gcc progname.c -lm
#include <stdio.h>
#include<stdlib.h>
//also see http://ajmarin.alwaysdata.net/codes/problems/836/
int main(){
	float hang[1000];
	float c;
	int i;
	hang[0]=0.5;
	for(i=1;i<1000;i++){
		hang[i]=hang[i-1]+((float)(1)/(float)(i+2));
	}
	scanf("%f",&c);
	while((int)(c*100) !=0){
		for(i=0;hang[i]<c;i++);
		printf("%d card(s)\n",i+1);
		scanf("%f",&c);
	}
	return (0);
}
