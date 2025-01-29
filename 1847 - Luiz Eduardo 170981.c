/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
void amanco(int a,int b,int c){
    if (a>b&& (b<c||b==c)){
        printf(":)\n");
    }
    else if (a<b && (b>c||b==c)){
        printf(":(\n");
    }
    else if (a<b && b<c && ((c-b)<(b-a))){
        printf(":(\n");
    }
    else if (a<b && b<c && ((c-b)>=(b-a))){
        printf(":)\n");
    }
    else if (a>b && b>c && ((b-c)<(a-b))){
        printf(":)\n");
    }
    else if (a>b && b>c && ((b-c)>=(a-b))){
        printf(":(\n");
    }
    else if (a==b && b<c){
        printf(":)\n");
    }
    else{
        printf(":(\n");
    }
}
main(){
    int a,b,c;

    scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
    amanco(a,b,c);

system("pause");}