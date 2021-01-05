#include<stdio.h>
#include<stdlib.h>
int graph[9][9]= {0};
int make_graph() {
	FILE *fp=fopen("graph.txt","r");
	int tmp;
	for(int i=1 ; i<=8 ; i++) {
		for(int j=1 ; j<=8 ; j++) {
			fscanf(fp,"%d",&graph[i][j]);
		}
		fgetc(fp);
	}
}

int main() {
	int f=1,j[1000]= {0},n_pp=1,n_j=1;
	j[n_j]=f;
	n_pp++;
	make_graph();
	do {
		int allzero=0;
		for(int i=1 ; i<=8 ; i++) {
			graph[i][f]=0;
			if(graph[f][i]==1) {
				if(allzero==0) {
					graph[f][i]=0;
					n_j++;
					j[n_j]=i;
					allzero++;
					n_pp++;
				}
			}
		}
		f=j[n_j];
		if(allzero==0) {
			n_pp--;
			f=j[n_pp];
		}
	} while(n_pp!=0);
	for(int i=1 ; i<=n_j ; i++) {
		printf("%d ",j[i]);
	}


}
