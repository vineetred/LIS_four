arr1 =[]
X = [19,3,27,4,5,26,23,24,25,6,7]
P = [1]*len(X)

for i in range(1,len(X)):
    arr = []
    for j in range(0, i):
        if(X[i]>X[j]):
            temp = P[j]+1
            if(temp>P[i]):
                P[i] = temp
                arr.append(X[j])
    arr.append(X[i])
    arr1.append(arr)
# print(max(arr1))
print(arr1)

def lis(X):
    """Returns the Longest Increasing Subsequence in the Given List/Array"""
    N = len(X)
    P = [0] * N
    M = [0] * (N+1)
    L = 0
    for i in range(N):
       lo = 1
       hi = L
       while lo <= hi:
           mid = (lo+hi)//2
           if (X[M[mid]] < X[i]):
               lo = mid+1
           else:
               hi = mid-1
 
       newL = lo
       P[i] = M[newL-1]
       M[newL] = i
       print ("M=",M)
       print ("P=",P)
 
       if (newL > L):
           L = newL
 
    S = []
    k = M[L]
    for i in range(L-1, -1, -1):
        S.append(X[k])
        k = P[k]
    return S[::-1]
 
s = input()
numbers = list(map(int, s.split()))
print (lis(numbers))