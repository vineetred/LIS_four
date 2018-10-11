#include <stdio.h>
#include <math.h>

int main()
{
    int X[6] = {19, 3, 27, 4, 5, 26};
    int P[6] = {0,0,0,0,0,0};
    int M[7] = {0,0,0,0,0,0,0};
    int L = 0;
    int lo,hi,newL,mid,k;

    for(int i = 0; i<6;i++){
        lo = 1;
        hi = L;
        while(lo<=hi){
            mid = floor((lo+hi)/2);

            if(X[M[mid]]< X[i]){
                lo = mid+1;
            }
            else{
                hi = mid - 1;
            }
        }
        newL = lo;
        P[i] = M[newL-1];
        M[newL] = i;
        // printf("M= %d \n",M[i]);
        if(newL > L){
            L = newL;
        }
    }
    int S[6] = {0,0,0,0,0,0};
    int S_rev[6] = {0,0,0,0,0,0};
    k = M[L];
    // printf("Hello!!");
    for(int j = L-1; j>-1;j--){
        // printf("L = %d\n",L);
        S[j]=X[k];
        k = P[k];
        // printf("%d \n",S[j]);
    }
    // int sizeArr = 0;
    // sizeArr =  sizeof(S)/sizeof(S[0]);
    for(int z = 0;z<L;z++){
        printf("X = %d\n", S[z]);
    }

    return 0;
}
