#include<stdio.h>
int mod(int n);
int main(){
	int t,n,m,i,j,temp,pix[182][182],dist[182][182],p,q;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++){
			scanf("%d",&temp);
			for(j=m-1;j>=0;j--){
				pix[i][j]=temp%10;
				if(pix[i][j]==1) dist[i][j]=0;
				temp=temp/10;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				dist[i][j]=-1;
				for(p=0;p<n;p++){
					for(q=0;q<m;q++){
						if(pix[p][q]==1 && (dist[i][j]==-1 || (mod(i-p) +mod(j-q))<dist[i][j]))
							dist[i][j]=mod(i-p)+mod(j-q);
					}
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				printf("%d ",dist[i][j]);
			printf("\n");
		}
	}
	return (0);
}
int mod(int n){
	if (n>=0) return n;
	return 0-n;
}
