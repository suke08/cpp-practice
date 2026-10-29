#include<cstdio>

int main(){
    int A,B,D;
    scanf("%d %d %d",&A,&B,&D);
    int sum = A + B;
    int z[10000],num = 0;
    do{
        z[num++] = sum % D;
        sum = sum / D;

    }while(sum!=0);
    for(int i = (num-1); i >=0; i--){
        printf("%d",z[i]);
    }
    return 0;
}