#include<cstdio>
const int MAXN = 20;
int a[MAXN];

int main(){
    int n,x;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    int flag= -1;
    for(int i = 0; i  < n; i++){
        if(a[i] == x) {
            flag = i+1;
            break;
        }
    }
    if(flag!=-1) printf("%d",flag);
    else printf("NO");
    return 0;
}