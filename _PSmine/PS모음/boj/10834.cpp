#include<stdio.h>
struct b{
	int r1;
	int r2;
	int t;
};
int main(){
	int m,d=0,r=1;
	b w[1000];
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d %d %d",&w[i].r1,&w[i].r2,&w[i].t);
		d+=w[i].t;
		r*=w[i].r2;
	}
	for(int i=0;i<m;i++){
		r/=w[i].r1;
	}
	printf("%d %d",d%2,r);
}
