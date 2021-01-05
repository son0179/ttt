#include<stdio.h>
int n,m;
double maax;
int a[5050],b[5050],c[5050],d[5050];
int maxind;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i=1;i<=m;i++){
        scanf("%d %d",&c[i],&d[i]);
    }
    for(int i=1;i<=n;i++){
        maax=-33;
        for(int j=1;j<=m;j++){
            int u=a[i]+c[j];
            int l=b[i]+d[j];
            double p=(double)u/(double)l;
            //printf("d: %lf\n", p);

            if(maax-p<0){
                maax=p;
                maxind=j;
            }

        }
        printf("%d\n",maxind);
    }
}
