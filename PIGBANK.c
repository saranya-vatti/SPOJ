#include <stdio.h>
void func();
int min(int a,int b);
int MAX=32767;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		func();
	}
	return (0);
}
void func(){
	int e,f,W,i,j,n;
	scanf("%d %d",&e,&f);
	W = f-e;
	scanf("%d",&n);
	int V[n+1][W+1],p,w;
	for(j=0;j<=W;j++){
		V[0][j]=MAX;
	}
	V[0][0]=0;
	for(i=1;i<=n;i++){
		scanf("%d %d",&p,&w);
		for(j=0;j<=W;j++){
			if(j>=w){
				if(V[i-1][j-w]!=MAX || V[i-1][j]!=MAX)
					V[i][j]=min(V[i-1][j],p+V[i-1][j-w]);
				else V[i][j]=MAX;
			}
			else if(V[i-1][j]!=MAX) V[i][j]=V[i-1][j];
			
		}
	}
	/*for(i=0;i<=n;i++){
		for(j=0;j<=W;j++){
			printf("%d\t",V[i][j]);
		}
		printf("\n");
	}*/
	printf("%d\n",V[n][W]);
}
int min(int a,int b){
	if(a>=b) return b;
	return a;
}	
