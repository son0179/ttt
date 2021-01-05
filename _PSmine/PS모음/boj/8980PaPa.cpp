#include<stdio.h>
int main() {
	int n,c,m,box[10000][3]= {0},truck[10000]= {0},max_box=0,exceed_ch=0,j_ch=0;
	int index1[10000][10]={0}, number1=1;
	scanf("%d%d%d",&n,&c,&m);
	for(int i=0; i<m; i++) {
		scanf("%d%d%d",&box[i][0],&box[i][1],&box[i][2]);
	}
#	for(int i=1; i<2^m; i++) {
#		for(int j=0; j<m; j++) {
#			index1[i][j]=(number1 % (2^(j+1)) );
#		}
#		number1++;
#	}
	for(int i=0; i<2^m; i++) {
		for(int j=0; j<m; j++) {
			printf("%d ",index1[i][j]);
		}
		printf("\n");
	}

}
