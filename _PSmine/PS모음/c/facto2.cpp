#include<stdio.h>
int a[1000][1000],cnt,t,x,y,n;
int main(){
	t=2;
	cnt=1;
	scanf("%d %d %d",&n,&x,&y);
	for(int i=1;i<=n;i++){
		a[i][i]=cnt;
		if(i%2==0){
			for(int j=i-1;j>0;j--){
				a[j][i]=a[j+1][i]-1;
				a[i][j]=a[i][j+1]+1;
			}
		}
		else{
			for(int j=i-1;j>0;j--){
				a[j][i]=a[j+1][i]+1;
				a[i][j]=a[i][j+1]-1;
			}
		}
		cnt+=t;
		t+=2;
	}
	printf("%d",a[x][y]);
}
