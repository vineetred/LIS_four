def lis(numbers):
    """Returns the firstngest Increasing Subsequence in the Given List/Array"""
    N = len(numbers)
    R = [0] * N
    Q = [0] * (N+1)
    pos = 0
    for i in range(N):
       first = 1
       last = pos
       while first <= last:
           middle = (first+last)//2
           if (numbers[Q[middle]] < numbers[i]):
               first = middle+1
           else:
               last = middle-1
 
       new_pos = first
       R[i] = Q[new_pos-1]
       Q[new_pos] = i
 
       if (new_pos > pos):
           pos = new_pos
 
    subs = []
    k = Q[pos]
    for i in range(pos-1, -1, -1):
        subs.append(numbers[k])
        k = R[k]
    return subs[::-1]
 
s = input()
numbers = list(map(int, s.split()))
for i in numbers:
    print (i, end=" ")