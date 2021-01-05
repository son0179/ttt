#include<stdio.h>
#include<stdlib.h>
int nord[9]={0};
int graph[9][9]={0};
int stack[100]={0};
int sp=1;
int make_graph(){
	FILE *fp=fopen("graph.txt","r");
	int tmp;
	for(int i=1 ; i<=8 ; i++){
		for(int j=1 ; j<=8 ; j++){
			fscanf(fp,"%d",&graph[i][j]);
		}
		fgetc(fp);
	}
}

int next(int);
int push(int x){
	stack[sp]=x;
	sp++;
	nord[x]=1;
	printf("%d ",x);
	next(x);
}
int pop(){
	sp--;
	if(sp>0){	
		next(stack[sp-1]);
	}
}
int next(int x){
	int i,ch=0;
	for(i=1 ; i<=8 ; i++){
		if(graph[x][i]==1&&nord[i]==0){
			ch=1;
			break;
		}
	}
	if(ch==1){
		push(i);	
	}
	else{
		pop();
	}
}
int main(){
	make_graph();
	push(1);
	
}
