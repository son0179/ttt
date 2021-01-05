#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char a[110000];
        int l=0,c1=0,c2=0;
        scanf("%s",a);
        for(int j=0;a[j]!='\0';j++){
            l++;
        }
        int x=0,y=l-1;
        while(x<y){
            if(a[x]!=a[y]){
                c2++;
                if(a[x+1]==a[y]){
                    x++;
                }
                else{
                    c2=2;
                    break;
                }
            }
            else{
                x++;
                y--;
            }
        }
        x=0;
        y=l-1;
        while(x<y){
            if(a[x]!=a[y]){
                c1++;
                if(a[x]==a[y-1]){
                    y--;
                }
                else{
                    c1=2;
                    break;
                }
            }
            else{
                x++;
                y--;
            }
        }
        if(c1<c2){
            printf("%d\n",c1);
        }
        else{
            printf("%d\n",c2);
        }
    }
}
