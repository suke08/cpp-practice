#include<cstdio>

int main(){
    int row,col;
    char c;
    scanf("%d %c",&col,&c);
    if(col%2 == 1) row = col /2 +1 ;
    else row = col/2;
    for(int i = 1; i <= col; i++){
        printf("%c",c);
    }
    printf("\n");
    for(int i = 1; i <= row-2; i++){
        printf("%c",c);
        for(int j = 1; j <= col-2; j++){
            printf(" ");
        }
        printf("%c\n",c);
    }
    for(int i = 1; i <= col; i++){
        printf("%c",c);
    }
    return 0;
}