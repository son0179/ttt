#include<stdio.h>
int main(){
	int cnt=1,s=0,a[100][4];
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			for(int k=0;k<=3;k++){
				a[cnt][1]=i;
				a[cnt][2]=j;
				a[cnt][3]=k;
				cnt++;
			}
		}
	}
	for(int i=1;i<cnt;i++){
		if(a[i][1]!=0&&a[i][1]!=a[i][2]&&a[i][1]!=a[i][3]&&a[i][3]!=a[i][2]){
			int tmp=10,tmp2=-10;
			for(int j=1;j<=3;j++){
				if(a[i][j]==1){
					tmp=j;
				}
				if(a[i][j]==0){
					tmp2=j;
				}
			}
			if(tmp2<tmp){
				printf("%d%d%d ",a[i][1],a[i][2],a[i][3]);
				s++;
			}
		}
	}
	printf("\n%d",s);
}
