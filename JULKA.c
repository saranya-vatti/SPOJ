#include <stdio.h> 
int main()
{
	int i,k;
	char sum[101];
	char diff[101];
	int intsum[200],intdiff[200],intk[200],intn[200];
	int j,sumlen,difflen,carry,rem;
	for(i=0;i<10;i++){
		scanf("%s",sum);
		scanf("%s",diff);
		j=0;
		for(j=0;j<200;j++){
			intsum[j]=0;
			intdiff[j]=0;
			intk[j]=0;
			intn[j]=0;
		}
		
		j=0;sumlen=0;
		while(sum[j]!='\0'){
			sumlen++;j++;
		}
		k=199;
		for(j=sumlen-1;j>=0;j--){
			intsum[k]=sum[j]-48;k--;
		}
		j=0,difflen=0;
		while(diff[j]!='\0'){
			difflen++;j++;
		}
		k=199;
		for(j=difflen-1;j>=0;j--){
			intdiff[k]=diff[j]-48;k--;
		}

		carry=0;k=199;
		for(j=199;j>=0 && k>=0;j--){
			intk[j]=intsum[k]+intdiff[k]+carry;
			carry=intk[j]/10;
			intk[j]=intk[j]%10;
			k--;
		}

		rem=0;
		for(j=0;j<199;j++){
			rem=intk[j]%2;
			intk[j]=intk[j]/2;
			intk[j+1]=(10*rem)+intk[j+1];
		}
		intk[j]=intk[j]/2;

		for(j=199;j>0;j--){
			if(intsum[j]>=intk[j]){
				intn[j]=intsum[j]-intk[j];
			}
			else{
				intn[j]=intsum[j]+10-intk[j];
				if(intsum[j-1]!=0) intsum[j-1]--;
				else{
					k=j-1;
					while(intsum[k]==0) intsum[k--]=9;
					intsum[k]--;
					
				}
			}
		}
		intn[j]=intsum[j]-intk[j];

		for(j=0;intk[j]==0;j++);
		for(;j<200;j++)
			printf("%d",intk[j]);
		printf("\n");

		for(j=0;intn[j]==0;j++);
		for(;j<200;j++)
			printf("%d",intn[j]);
		printf("\n");
	}
	return (0);
}
