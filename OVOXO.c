#include<stdio.h>
int main(){
	int t,arr[3][3],i,j;
	char r1[3],r2[3],r3[3];
	scanf("%d",&t);
	while(t--){
		scanf("%s",r1);
		scanf("%s",r2);
		scanf("%s",r3);
		for(i=0;i<3;i++){
			if(r1[i]=='O') arr[0][i]=0;
			else if(r1[i]=='X') arr[0][i]=1;
			else arr[0][i]=-1;
		}
		for(i=0;i<3;i++){
			if(r2[i]=='O') arr[1][i]=0;
			else if(r2[i]=='X') arr[1][i]=1;
			else arr[1][i]=-1;
		}
		for(i=0;i<3;i++){
			if(r3[i]=='O') arr[2][i]=0;
			else if(r3[i]=='X') arr[2][i]=1;
			else arr[2][i]=-1;
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++)
				printf("%d  ",arr[i][j]);
			printf("\n");
		}
	}
	return (0);
}
