#include<stdio.h>
int ch[16][16]={0};
int r[16][16]={0};
int rc(int x,int y){
	if(ch[x][y]==1){
		return r[x][y];
	}
	if(x==0||y==0){
		return 1;
	}
	ch[x][y]=1;
	r[x][y]=rc(x-1,y)+rc(x,y-1);
	
	return r[x][y];
}
int main(){
	int y,x,kx,ky,k;
	scanf("%d %d %d",&y,&x,&k);
	if(k==0){
		printf("%d",rc(x,y));
	}
	else{
		k--;
		ky=k/x;
		kx=k/y;
		printf("%d",rc(kx,ky)*rc(x-kx-1,y-ky-1));
	}
}

