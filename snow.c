#include<stdio.h>
#include<conio.h>

void main(){
    int i,j,x;
    for (i=1;i>0;i++){
        printf("*");
        for(j=2;j>1;j++){
            printf("\t");
            for (int x = 0; x < 8; x++){
                printf(".");
            }
        }
        printf("\t");
    }
}