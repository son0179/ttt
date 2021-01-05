#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        double n,a[10000],c=0;
        double s=0;
        scanf("%lf",&n);
        for(int j=0;j<n;j++){
            scanf("%lf",&a[j]);
            s+=a[j];
        }
        for(int j=0;j<n;j++){
            if(a[j]>s/n){
                c++;
            }
        }
        printf("%.3lf%c\n",100/(n/c),'%');
    }
}
