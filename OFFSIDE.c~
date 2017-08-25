#include <stdio.h>
int main(){
	int a,d,flag,i,j,temp,att[11],sec=-1,last=-1;
	for(i=0;i<11;i++) att[i]=-1;
	while(scanf("%d %d",&a,&d) == 2 && (a || d)){
		flag=0;sec=-1;last=-1;
		for(i=0;i<a;i++){
			scanf("%d ",&att[i]);
		}
		for(i=0;i<d;i++){
			scanf("%d ",&temp);
			if(last==-1) last=temp;
			else if(sec==-1){
				if(temp<=last){
					sec=last;
					last=temp;
				}
				else sec=temp;	
			}
			else if(temp<=last){
				sec=last;
				last=temp;
			}
			else if(temp<=sec) sec=temp;
		}	
		for(i=0;i<a;i++){
			if(att[i]<sec) flag=1;
		}
		if(flag==1) printf("Y\n");
		else printf("N\n");
	}
	return (0);
}
