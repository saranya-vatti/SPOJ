#include <stdio.h>
#include <stdlib.h>
int main(){
	char n[101];
	int max=1024;
	int intn[200],j,len,k,intdiff[200],carry,flag=0,ans[max][200],i;
	for(i=0;i<max;i++){
		scanf("%s",n);
		j=0;
		for(j=0;j<200;j++){
			intn[j]=0;
			intdiff[j]=0;
		}
		j=0;len=0;
		while(n[j]!='\0'){
			len++;j++;
		}
		intdiff[199]=2;
		k=199;
		for(j=len-1;j>=0;j--){
			intn[k]=n[j]-48;k--;
		}

		if(len==1 && intn[199]==1){
			ans[i][0]=1;
			ans[i][1]=-1;
		}

		else{
			carry=0;k=199;
			for(j=199;j>=0 && k>=0;j--){
				intn[j]=intn[k]+intn[k]+carry;
				carry=intn[j]/10;
				intn[j]=intn[j]%10;
				k--;
			}

			for(j=199;j>0;j--){
				if(intn[j]>=intdiff[j]){
					intn[j]=intn[j]-intdiff[j];
				}
				else{
					intn[j]=intn[j]+10-intdiff[j];
					if(intn[j-1]!=0) intn[j-1]--;
					else{
						k=j-1;
						while(intn[k]==0) intn[k--]=9;
						intn[k]--;
				
					}
				}
			}
			intn[j]=intn[j]-intdiff[j];

			for(j=0;intn[j]==0;j++);
			for(k=0;j<200 && k<200;j++)
				ans[i][k++]=intn[j];
			ans[i][k]=-1;
		}
	}
	for(i=0;i<max;i++){
		for(j=0;j<200 && ans[i][j]!=-1;j++){
			printf("%d",ans[i][j]);
		}
		printf("\n");
	}
	return (0);
}
	
