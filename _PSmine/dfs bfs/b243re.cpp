#include<stdio.h>
#include<stdlib.h>
int graph[9][9]= {0};
int q[9]={0},qp=1,nqp=0;
int ch[9]= {0};
int make_graph() {
	FILE *fp=fopen("graph.txt","r");
	for(int i=1 ; i<=8 ; i++) {
		for(int j=1 ; j<=8 ; j++) {
			fscanf(fp,"%d",&graph[i][j]);
		}
		fgetc(fp);
	}
}
int bfs(int x) {
	printf("%d ",x);
	for(int i=1;i<9;i++){
		if(graph[x][i]==1&&ch[i]==0){
			qp++;
			q[qp]=i;
			ch[i]=1;
		}
	}
}
int main() {
	make_graph();
	q[1]=1;
	ch[1]=1;
	for(int i=1;i<9;i++){
		bfs(q[i]);
	}
}
