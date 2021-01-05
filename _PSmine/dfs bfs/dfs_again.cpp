#include<stdio.h>
#include<stdlib.h>
int graph[9][9]= {0};
int ch[9]= {0};
int stack[9]= {0};
int sp=0;
int check=0;
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
int pop();
int dfs(int x) {
	int i;
	for(i=1; i<9; i++) {
		if(graph[x][i]==1&&ch[i]==0) {
			check=1;
			break;
		}
	}
	if(check==1) {
		push(i);
	}
	else{
		pop();
	}
}
int push(int x) {
	check=0;
	sp++;
	ch[x]=1;
	stack[sp]=x;
	printf("%d ",x);
	dfs(x);
}
int pop() {
	sp--;
	if(sp!=1) {
		dfs(stack[sp]);
	}
}
int main() {
	make_graph();
	push(1);
}
