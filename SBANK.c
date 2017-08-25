#include<stdio.h>
void sort(int n);
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		sort(n);
	}
	return (0);
}
void sort(int n){
	int acc[n][6],i,j;
	for(i=0;i<n;i++){
		scanf("%d %d %d %d %d %d",&acc[i][0],&acc[i][1],&acc[i][2],&acc[i][3],&acc[i][4],&acc[i][5]);
	}
	for(i=0;i<n;i++){
		printf("%02d %08d %04d %04d %04d %04d\n",acc[i][0],acc[i][1],acc[i][2],acc[i][3],acc[i][4],acc[i][5]);
	}
}
