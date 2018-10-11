# LIS_four

Each of the programs  takes, as input, a sequence of n integers, and outputs a (not necessarily contiguous)
subsequence that is as long as possible, and in which the elements are monotonically 
increasing left-to-right.  So, for example, if your input is 
```
    19 3 11 7 15 12 4 12 8 16
```
then one possible output is

```
    3 7 15 16

```

There are several other possible outputs, all of length 4 - 
```
    3 4 8 16
    3 4 12 16
    3 7 8 16
    3 7 12 16
    3 11 12 16
    3 11 15 16

```

We've coded the solutions in C, Python 3.6, Rust, and Go.
