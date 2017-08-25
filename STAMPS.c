//sort, add the greatest
#include <stdio.h>
#include<stdlib.h>
int howmany(int sum, int numf);
int main(){
	int t,sum,numf;
	scanf("%d",&t);
	int ans[t],i=0;
	while(i<t){
		scanf("%d %d",&sum,&numf);
		ans[i]=howmany(sum,numf);
		i++;
	}
	for(i=1;i<=t;i++){
		if (ans[i-1]==-1)
			printf("Scenario #%d:\nimpossible\n\n",i);
		else
			printf("Scenario #%d:\n%d\n\n",i,ans[i-1]);
	}
	return (0);
}
int howmany(int sum, int numf){
	int s[numf],i,temp,j,ans,tempsum=0;
	for(i=0;i<numf;i++){
		scanf("%d",&s[i]);
	}
	for(i=0;i<numf;i++){
		for(j=i+1;j<numf;j++){
			if(s[j]>s[i]){
				temp=s[j];
				s[j]=s[i];
				s[i]=temp;
			}
		}
	}
	i=0;ans=0;
	while(i<numf && tempsum<sum){
		ans++;tempsum+=s[i];i++;
	}
	if(tempsum<sum) ans=-1;
	return ans;
}
