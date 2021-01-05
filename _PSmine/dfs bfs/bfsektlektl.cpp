#include<stdio.h>
#include<stdlib.h>
int graph[9][9]= {0};
int ch[9]= {0};
int q[100]= {0};
int tail=1,head=0;
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
int input(int);
int bfs() {
	head++;
	if(head!=tail) {
		for(int i=1; i<9; i++) {
			if(graph[head][i]==1&&ch[i]==0) {
				input(i);
			}
		}
		bfs();
	}
}
int input(int x) {
	ch[x]=1;
	q[tail]=x;
	tail++;
	printf("%d ",x);
}
int main() {
	make_graph();
	input(1);
	bfs();       
}
