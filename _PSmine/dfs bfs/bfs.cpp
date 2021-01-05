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
int q[100]={0};
int head=0,tail=1;
int ch[9]={0};
int input(int);
int bfs(){
	head++;
	if(head!=tail){
		for(int i=1;i<9;i++){
			if(ch[i]==0&&graph[head][i]==1){
				input(i);  
			}
		}
		bfs();
	}
}
int input(int x){
	q[tail]=x;
	tail++;
	ch[x]=1;
	printf("%d ",x);
}
int main(){
	make_graph();
	input(1);
	bfs();
}
