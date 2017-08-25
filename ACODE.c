#include<math.h> //when using math.h, link explicitly with gcc progname.c -lm
#include <stdio.h>
#include<stdlib.h>
int main(){
	int dp[10000],i=0,j,strln=0;
	char str[10000];	
	scanf("%s",str);
	while(str[0]-48 != 0){
		dp[0]=1;strln=0;i=0;
		while(str[i++]!='\0') strln++;
		if(strln>=2){
			if((str[0]-48)*10 + str[1]-48 <=26){
				if(str[1] != '0') dp[1]=2;
				else dp[1]=1;
			} 
			else{
				if(str[1] != '0') dp[1]=1;
				else dp[1]=0;
			} 
			j=2,i=2;
			while(str[i]!='\0'){
				if(str[i]!='0') dp[j] = dp[j-1];
				else dp[j]=0;
				if(str[i-1]!='0')
					if((str[i-1]-48)*10 + str[i]-48 <=26)
						dp[j] += dp[j-2];
				i++;
				j++;
			}
			printf("%d\n",dp[i-1]);
		}
		else printf("1\n");
		scanf("%s",str);
	}
	return (0);
}
