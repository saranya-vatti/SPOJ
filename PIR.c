#include<stdio.h>
#include<math.h>
int main(){
	double t,edge[6],U,W,v,V,w,u;
	double temp,u2,v2,w2;
	scanf("%lf",&t);
	while(t--){
		scanf("%lf %lf %lf %lf %lf %lf",&U,&W,&v,&V,&w,&u);
		temp=4*u*u*v*v*w*w;
		u2=(v*v)+(w*w)-(U*U);
		v2=(w*w)+(u*u)-(V*V);
		w2=(u*u)+(v*v)-(W*W);
		temp=temp-(u*u*u2*u2);
		temp = temp-(v*v*v2*v2);
		temp = temp -(w*w*w2*w2);
		temp = temp+ (u2*v2*w2);
		temp = sqrt(temp);
		temp = temp/12;
		printf("%.4lf\n",temp);
	}
	return (0);
}
