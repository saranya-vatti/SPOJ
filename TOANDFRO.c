#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
void decode(int col);
main(){
	int col;
	scanf("%d",&col);
	while(col!=0){
		decode(col);
		scanf("%d",&col);
	}
		
}
void decode(int col){
	int i,j;
	char str[200];
	scanf("%s",str);
	int strlength=strlen(str);
	int row=strlength/col;
	char arr[row][col];
	int r=0,c=0,flag=1;
	for(i=0;i<strlength;i++){
		arr[r][c]=str[i];
		c=c+flag;
		if(c>=col || c<0){
			r++;
			flag=flag*(-1);
			if(c==col) c--;
			else c++;
		}
		
	}
	for(i=0;i<col;i++)
		for(j=0;j<row;j++)
			printf("%c",arr[j][i]);
	printf("\n");
}
