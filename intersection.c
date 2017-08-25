//UOFTBC.c
#include<stdio.h>
#include<math.h>
void aster(int n,int f);
int eq(double a,double b);
int intersect(int x00,int y00,int x10,int y10,int x01,int y01,int x11,int y11);
int intersectionx(int x00,int y00,int x10,int y10,int x01,int y01,int x11,int y11);
int intersectiony(int x00,int y00,int x10,int y10,int x01,int y01,int x11,int y11);
int onsameside(int ax,int ay,int bx,int by,int x1,int y1,int x2,int y2);
int main(){
	int t,n,f,x[2][2],y[2][2],i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&f);
		aster(n,f);
		
	}
	/*for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter x[%d][%d] and y[%d][%d]\n",i,j,i,j);
			scanf("%d %d",&x[i][j],&y[i][j]);
		}
	}*/
	printf("%d,%d\n",intersectionx(x[0][0],y[0][0],x[1][0],y[1][0],x[0][1],y[0][1],x[1][1],y[1][1]),intersectiony(x[0][0],y[0][0],x[1][0],y[1][0],x[0][1],y[0][1],x[1][1],y[1][1]));
	return (0);
}
void aster(int n,int f){
	int xs,ys,xd,yd,i,x[n][3],y[n][3],j,mark[n],count=0,xshot,yshot;
	double centroidx,centroidy;
	scanf("%d %d %d %d",&xs,&ys,&xd,&yd);
	for(j=0;j<n;j++){
		for(i=0;i<3;i++)
			scanf("%d %d",&x[j][i],&y[j][i]);
		mark[i]=0;
	}
	for(i=0;i<f;i++){
		xshot=(xs+xd)*i;
		yshot=(ys+yd)*i;
		for(j=0;j<n;j++){
			centroidx=(x[j][0]+x[j][1]+x[j][2])/3;
			centroidy=(y[j][0]+y[j][1]+y[j][2])/3;
			if(onsameside(centroidx,centroidy,xshot,yshot,x[j][0],y[j][0],x[j][1],y[j][1]) && onsameside(centroidx,centroidy,xshot,yshot,x[j][1],y[j][1],x[j][2],y[j][2]) && onsameside(centroidx,centroidy,xshot,yshot,x[j][2],y[j][2],x[j][0],y[j][0])) mark[j]=1;
		}
	}
	for(i=0;i<n;i++) if(mark[i]==1) count++;
	printf("%d\n",count);
		
}
int intersect(int x00,int y00,int x10,int y10,int x01,int y01,int x11,int y11){
	int d;
	double m1,m2;
	if(x00==x01){
		if(x10==x01) return 1;
		return 0;
	}
	if(x10==x11) return 0;
	m1=(y00-y01)/(x00-x01);
	m2=(y10-y11)/(x10-x11);
	return (fabs(m1 - m2) > 0.00001);
}
int eq(double a,double b){
	return (fabs(a - b) < 0.00001);
}
int intersectionx(int x00,int y00,int x10,int y10,int x01,int y01,int x11,int y11){
	double  distAB, theCos, theSin, newX, ABpos ;
	x01-=x00; y01-=y00;
	x10-=x00; y10-=y00;
	x11-=x00; y11-=y00;
	distAB=sqrt(x01*x01+y01*y01);
	// Rotate the system so that point B is on the positive X axis.
	theCos=x01/distAB;
	theSin=y01/distAB;
	newX=x10*theCos+y10*theSin;
	y10  =y10*theCos-x10*theSin; x10=newX;
	newX=x11*theCos+y11*theSin;
	y11  =y11*theCos-x11*theSin; x11=newX;
	// Discover the position of the intersection point along line A-B.
 	ABpos=x11+(x10-x11)*y11/(y11-x10);
	return (x00+ABpos*theCos);
}
int intersectiony(int x00,int y00,int x10,int y10,int x01,int y01,int x11,int y11){
	double  distAB, theCos, theSin, newX, ABpos ;
	x01-=x00; y01-=y00;
	x10-=x00; y10-=y00;
	x11-=x00; y11-=y00;
	distAB=sqrt(x01*x01+y01*y01);
	// Rotate the system so that point B is on the positive X axis.
	theCos=x01/distAB;
	theSin=y01/distAB;
	newX=x10*theCos+y10*theSin;
	y10  =y10*theCos-x10*theSin; x10=newX;
	newX=x11*theCos+y11*theSin;
	y11  =y11*theCos-x11*theSin; x11=newX;
	// Discover the position of the intersection point along line A-B.
 	ABpos=x11+(x10-x11)*y11/(y11-x10);
	return (y00+ABpos*theSin);
}
//func to check if two points A and B lie on same side of line from x1,y1 to x2,y2
int onsameside(int ax,int ay,int bx,int by,int x1,int y1,int x2,int y2){
	int temp1=(y1-y2)*(ax-x1);
	int temp2=(x2-x1)*(ay-y1);
	int temp3=(y1-y2)*(bx-x1);
	int temp4=(x2-x1)*(by-y1);
	if ((temp1+temp2)*(temp3+temp4)>=0) return 1;
	return 0;
}
