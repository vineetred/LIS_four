#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //Initialsing my arrays
    int ffff[argc];
    int X[argc]; //Holds the int values of the CLI
    int P[argc];
    for (int i = 0; i<argc;i++){
        P[i] = 0;
    }
    int M[argc+1];
    for(int i = 0;i<=argc;i++){
        M[i] = 0;
    }
    int L = 0;
    int lo,hi,newL,mid,k;

//This loop in incharge of converting the CLI to int
for(int f = 1; f<argc; f++){ 
    X[f] = atoi(argv[f]);
    // printf("The number entered: %d \n",X[f]);
}
//The Binary search happens here
    for(int i = 1; i<argc;i++){
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
        if(newL > L){
            L = newL;
        }
    }
    int S[100] = {0};
    int S_rev[100] = {0};
    k = M[L];

    for(int j = L-1; j>-1;j--){
        S[j]=X[k];
        k = P[k];    
        
        }
//Prints out the numbers
    printf("X = ");
    for(int z = 0;z<L;z++){
        printf(" %d ", S[z]);
    }
    printf("\n");

    return 0;
}
