#include <stdio.h>
#include <stdlib.h>
int n;
int dist(int node1,int node2,int **E,int **D);
int main(){
	int u,v,i,j;
	scanf("%d",&n);
	int **E,**D;
	E=(int**)malloc(n*sizeof(int*));
	D=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++){
		E[i]=(int*)malloc(n*sizeof(int));
		D[i]=(int*)malloc(n*sizeof(int));
	}
	for(i=0;i<n;i++){	
		for(j=0;j<n;j++)
			E[i][j]=0;
			D[i][j]=0;
	}
	for(i=0;i<n-1;i++){
		scanf("%d %d",&u,&v);
		E[u-1][v-1]=E[v-1][u-1]=1;
		D[u-1][v-1]=D[v-1][u-1]=1;
	}
	int largest=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			func(i,j,1,E,D);
		}
	}
	for(i=0;i<n;i++){	
		for(j=0;j<n;j++)
			if(largest<D[i][j]) largest=D[i][j];
	}
	printf("%d",largest);
	/*for(i=0;i<n;i++)
		free(E[i]);
	free(E);
	for(i=0;i<n;i++)
		free(D[i]);
	free(D);*/
	return (0);
}
void func(int node1,int node2,int d,int **E,int **D){
	int i;
	printf("node1=%d and node2=%d\n",node1,node2);
	if(D[node1][node2]!=0) return;
	if(E[node1][node2]==1) D[node1][node2]=1;
	else
	for(i=0;i<n;i++){
		if(E[node1][i]==1){
			//printf("node1=%d and i=%d and node2=%d\n",node1,i,node2);
			return 1+dist(i,node2,E,D);
		}
	}
}
	
