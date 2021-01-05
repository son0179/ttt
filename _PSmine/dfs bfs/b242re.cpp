#include<stdio.h>
#include<stdlib.h>
int graph[9][9]= {0};
int ch[9][9]= {0};
int ch1[9]= {0};
//int stack[8]={0};
//int sp=0;
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
int push(int x);
int dfs(int x) {
	for(int i=1; i<9; i++) {
		//printf(" i= %d graph= %d \n",i,graph[x][i]);
		if(graph[x][i]==1&&ch1[i]==0) {
			//printf(" ti= %d \n ",i);
			//ch[x][i]=1;
			//ch[i][x]=1;
			ch1[i]=1;
			push(i);
		}
	}
}
int push(int x) {
	printf("%d ",x);
	ch1[1]=1;
	dfs(x);
}
int pop() {

}
int main() {
	make_graph();
	push(1);
}
