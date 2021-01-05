#include<stdio.h>
int main(){
    int key;
    char a[10000],b[36]={'Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d %s",&key,a);
    for(int i=0;a[i]!='\0';i++){
        for(int j=10;j<36;j++){
            if(a[i]==b[j]){
                printf("%c",b[j-key]);
                break;
            }
        }
    }
}
