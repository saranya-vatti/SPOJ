#include<stdio.h>
#include<string.h>
int main(){
	int p,temp,i,j,k;
	char str[50];
	scanf("%d",&p);
	int ans[p][9];
	for(j=0;j<p;j++)
		for(k=1;k<9;k++)
			ans[j][k]=0;
	for(i=0;i<p;i++){		
		scanf("%d",&ans[i][0]);		
		scanf("%s",str);
		for(j=0;j<38;j++){
			if(str[j]=='T' && str[j+1]=='T' && str[j+2]=='T') ans[i][1]++;
			else if(str[j]=='T' && str[j+1]=='T' && str[j+2]=='H') ans[i][2]++;
			else if(str[j]=='T' && str[j+1]=='H' && str[j+2]=='T') ans[i][3]++;
			else if(str[j]=='T' && str[j+1]=='H' && str[j+2]=='H') ans[i][4]++;
			else if(str[j]=='H' && str[j+1]=='T' && str[j+2]=='T') ans[i][5]++;		
			else if(str[j]=='H' && str[j+1]=='T' && str[j+2]=='H') ans[i][6]++;
			else if(str[j]=='H' && str[j+1]=='H' && str[j+2]=='T') ans[i][7]++;
			else if(str[j]=='H' && str[j+1]=='H' && str[j+2]=='H') ans[i][8]++;
		}
		printf("%d",ans[i][0]);
		for(j=1;j<9;j++) printf(" %d",ans[i][j]);
		printf("\n");
	}
	return (0);
}
