#include<stdio.h>
int rgb[4000][6000][3],a[10],x,y,z;
char c[30],key[30];
int main(){
    FILE *rp = fopen("txt_image.txt","r");
    FILE *wp = fopen("txt_encrypted.txt","w");
    printf("24자리의 이진수 행열을 입력해주세요.\n");
    scanf("%s",key);
    fscanf(rp,"%d",&x);
    fscanf(rp,"%d",&y);
    fscanf(rp,"%d",&z);
    a[0]=1;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
                for(int k=0;k<3;k++)
            fscanf(rp,"%d",&rgb[i][j][k]);
        }
    }
    for(int i=1;i<10;i++){
        a[i]=a[i-1]*2;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            int ind=0;
            for(int k=0;k<3;k++){
                for(int l=7;l>=0;l--){
                    if(rgb[i][j][k]/a[l]>0){
                        c[ind]='1';
                        rgb[i][j][k]%=a[l];
                    }
                    else{
                        c[ind]='0';
                    }
                    ind++;
                }
                rgb[i][j][k]=0;
            }
            for(int k=0;k<8;k++){
                if(key[k]!=c[k]){
                    rgb[i][j][0]+=a[8-k-1];
                }
            }
            for(int k=0;k<8;k++){
                if(key[k+8]!=c[k+8]){
                    rgb[i][j][1]+=a[8-k-1];
                }
            }
            for(int k=0;k<8;k++){
                if(key[k+16]!=c[k+16]){
                    rgb[i][j][2]+=a[8-k-1];
                }
            }
        }
    }
    fprintf(wp,"%03d ",x);
    fprintf(wp,"%03d ",y);
    fprintf(wp,"%03d ",3);
    fprintf(wp,"\n");

     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<3;k++){
                fprintf(wp,"%03d ",rgb[i][j][k]);
                }
                fprintf(wp,"\n");

        }
    }
}
