package main

import (
  "fmt"
  "os"
  "bufio"
  "strings"
  "strconv"
)

func main() {
  scanner := bufio.NewScanner(os.Stdin)
    scanner.Scan()
    line := scanner.Text()
    nums:=strings.Split(line," ")
    N:=len(nums)
    numbers := make([]int, N)
    var i int
    for i=0;i<N;i++{
      a,err:=strconv.Atoi(nums[i])
      numbers[i]=a
      if err != nil {
          panic(err)
      }  
    }
  var first,last,pos,new_pos,middle,k int

  var Q[] int;
  var R[] int;
  Q=make([]int,N+1)
  R=make([]int,N)
  pos = 0
    for i=0;i<N;i++{
       first = 1
       last = pos
       for first <= last{
           middle = (first+last)/2
           if (numbers[Q[middle]] < numbers[i]){
               first = middle+1
           } else{
               last = middle-1
           }
       }
       new_pos = first
       R[i] = Q[new_pos-1]
       Q[new_pos] = i

       if (new_pos > pos){
           pos = new_pos
       }
    }

    for i=0;i<N;i++{
    }
    var subs []int
    subs=make([]int,pos)
    k = Q[pos]
    for i=pos-1;i>-1;i--{
      subs[i]=(numbers[k])
      k = R[k]
    }
    for i=0;i<pos;i++{
      fmt.Printf("%d ",subs[i])
    }
}