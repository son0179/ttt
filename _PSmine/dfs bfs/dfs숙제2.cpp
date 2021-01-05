#include<stdio.h>
#include<stdlib.h>
int node[9]= {0};
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
int dfs(int x) {
	node[x]=1;
	printf("%d ",x);
	for(int i=1; i<9; i++) {
		if(graph[x][i]==1&&node[i]==0) {
			dfs(i);
		}
	}
}
int main() {
	make_graph();
	dfs(1);
}
