#include <stdio.h>
#include <math.h>

int main()
{
    int sizeN = 0;
    printf("Enter the size of the array: \n");
    scanf("%d",&sizeN);
  
    int X[100];
    int P[100] = {0};
    int M[101] = {0};
    int L = 0;
    int lo,hi,newL,mid,k;

  printf("Enter the integers: \n");
    for(int lol = 0; lol<sizeN;lol++){
        printf("Enter number %d: \n",lol+1);
        scanf("%d",&X[lol]);
    }


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

    printf("\nX = ");
    for(int z = 0;z<L;z++){
        printf(" %d ", S[z]);
    }
    printf("\n");

    return 0;
}
