#include<cstdio>
const int MAXN = 100010;
int school[MAXN]={0};

int main(){
    int n,schID,score;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d %d",&schID,&score);
        school[schID]+=score;
    }
    int k = 1, max = -1;
    for(int i = 1; i <= n; i++){
        if(school[i] > max){
        max = school[i];
        k = i;
        }
    }
    printf("%d %d\n",k,max);
    return 0;
}