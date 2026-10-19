#include<cstdio>

int MAX3(int a, int b, int c){
    int MAX = a;
    if(MAX < b)
        MAX = b;
    if(MAX < c)
        MAX = c;
    return MAX;    

}

int MaxSubseqSum2( int A[], int N){
    int ThisSum,MaxSum = 0;
    for(int i = 0; i < N; i++){
        ThisSum = 0 ;
        for(int j = i ; j < N; j++){
            ThisSum += A[j];
            if(ThisSum > MaxSum) MaxSum = ThisSum;
        }
    }
    return MaxSum;
}

int MaxSubseqSum3( int A[], int left, int right){
    if(left == right){
        if(A[left] > 0)
            return A[left];
        else 
            return 0;
    }
        int mid = (left + right)/2;
        int MaxLeft = MaxSubseqSum3(A,left,mid);
        int MaxRight = MaxSubseqSum3(A,mid+1,right);
        int LeftThisSum = 0, LeftMaxSum = 0;
        for(int i = mid; i >= left; i--){
            LeftThisSum += A[i];
            if(LeftThisSum > LeftMaxSum) LeftMaxSum = LeftThisSum;
        }
        int RightThisSum = 0,RightMaxSum = 0;
        for(int i =mid+1; i <= right; i++){
            RightThisSum += A[i];
            if(RightThisSum > RightMaxSum) RightMaxSum = RightThisSum;
        }
        int MaxMid = RightMaxSum + LeftMaxSum;
        int Max = MAX3(MaxMid,MaxLeft,MaxRight);
        return Max;


}

int MaxSubseqSum4( int A[], int N){
    int ThisSum = 0, MaxSum = 0;
    for(int i = 0; i < N; i++){
        ThisSum += A[i];
        if(ThisSum > MaxSum)
            MaxSum = ThisSum;
        else if(ThisSum < 0)
            ThisSum = 0;
    }
    return MaxSum;
}

int main(){
    int a[100] = {1,-2,3,10,-4,7,2,-5};
    int b = MaxSubseqSum4(a,8);
    printf("%d\n",b);
    return 0;
}