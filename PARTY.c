//Knapsack
/*
10 3
6 10
5 6
5 6
ans shud be:
10 12
*/
#include<stdio.h>
int max(int a,int b);
void dynProg(int bud,int n);
int main(){
	int bud,n;
	scanf("%d %d",&bud,&n);
	while(bud!=0 || n!=0){
		dynProg(bud,n);
		scanf("%d %d",&bud,&n);
	}
	return (0);
}
void dynProg(bud,n){
	int fee[n],fun[n],arr[n+1][bud],funsum=0,largestfee=0,i,j,picks[n+1][bud],temp;
	for(i=0;i<n;i++)
		scanf("%d %d",&fee[i],&fun[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(fun[i]>fun[j]){
				temp=fun[i];
				fun[i]=fun[j];
				fun[j]=temp;
				temp=fee[i];
				fee[i]=fee[j];
				fee[j]=temp;
			}
		}
	}
	for(i=0;i<n+1;i++){
		for(j=0;j<bud;j++){
			arr[i][j]=0;
		}
	}
	for(i=1;i<n+1;i++){
		for(j=0;j<bud;j++){
			if(j>=fee[i-1] && fee[i-1]!=0){
				arr[i][j]=max(arr[i-1][j],fun[i-1]+arr[i-1][j-fee[i-1]]);
				if(fun[i-1]+arr[i-1][j-fee[i-1]]>arr[i-1][j]) picks[i][j]=1;
				else picks[i][j]=-1;
			}
			else {
				picks[i][j]=-1;
				if(j>0) arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
				else arr[i][j]=arr[i-1][j];
			}	
		}
	}
	/*for(i=1;i<n+1;i++){
		for(j=0;j<bud;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}*/
	for(i = bud-1, largestfee = arr[n][bud-1];; i--)
		if(arr[n][i] < largestfee)
			break;
	printf("%d %d\n", i + 1, arr[n][bud-1]);
}
int max(int a,int b){
	if(a>=b) return a;
	return b;
}	

