#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m;
	int a[9][9]={0};
	FILE *fp=fopen("graph.txt","a+");
	for(int i=0 ; i<9 ; i++){
		scanf("%d %d",&n,&m);
		a[n][m]=1;
		a[m][n]=1;
	}
	for(int i=1 ; i<=9 ; i++){
		for(int j=1 ; j<=9 ; j++){
			fprintf(fp,"%d ",a[i][j]);
		}
		fprintf(fp,"\n");
	}
}
