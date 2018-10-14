#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    clock_t begin = clock();

  //Initialsing my arrays
    int numArray[argc]; //Holds the int values of the CLI
    int P[argc];
    for (int i = 0; i<argc;i++){
        numArray[i] = 0;
    }
    int M[argc+1];
    for(int i = 0;i<=argc;i++){
        M[i] = 0;
    }
    int L = 0;
    int lowVal,highVal,lPrime,middle,k;

//This loop in incharge of converting the CLI to int
for(int f = 1; f<argc; f++){ 
    numArray[f] = atoi(argv[f]);
    // printf("The number entered: %d \n",X[f]);
}
//The Binary search happens here
    for(int i = 1; i<argc;i++){
        lowVal = 1;
        highVal = L;
        while(lowVal<=highVal){
            middle = floor((lowVal+highVal)/2);

            if(numArray[M[middle]]< numArray[i]){
                lowVal = middle+1;
            }
            else{
                highVal = middle - 1;
            }
        }
        lPrime = lowVal;
        P[i] = M[lPrime-1];
        M[lPrime] = i;
        if(lPrime > L){
            L = lPrime;
        }
    }
    int S[argc];
    for (int i = 0; i<argc;i++){
        S[i] = 0;
    }
    int S_rev[argc];
    for (int i = 0; i<argc;i++){
        S_rev[i] = 0;
    }
    k = M[L];

    for(int j = L-1; j>-1;j--){
        S[j]=numArray[k];
        k = P[k];    
        
        }
//Prints out the numbers
    printf("X = ");
    for(int z = 0;z<L;z++){
        printf(" %d ", S[z]);
    }
    printf("\n");

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Execution time: %f \n", time_spent);
    return 0;
}
