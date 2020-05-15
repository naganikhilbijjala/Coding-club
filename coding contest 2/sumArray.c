#include <stdio.h>
#include <math.h>
int main(){
    int N,A[101],sum=0;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        scanf("%d",&A[i]);
    }
    for(int i=1; i<=N; i++){
        sum+=A[i];
        printf("%d ",sum);
    }
}
