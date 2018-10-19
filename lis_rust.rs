use std::env;
#[allow(unused_variables)]
#[allow(unused_mut)]
#[allow(non_snake_case)]

fn main() {
    //Storing the CLI
    let args: Vec<_> = env::args().collect();
    //Initialising the arrays
    let lengtharr = args.len(); //Length

    let mut X:Vec<i32> = Vec::new(); // empty array to store numbers
    //This is X
    //Conversion is happening!
    for i in 1..lengtharr{
        let num:i32 = args[i].parse::<i32>().unwrap();
        X.push(num);
    }

    println!("These is X = {:?}", X);
    //Generating the two arrays and populating with 0.
    let mut PStore:Vec<i32> = Vec::new();
    for i in 0..lengtharr{
        PStore.push(0);
    }
    let mut MStore:Vec<i32> = Vec::new();
    for i in 0..lengtharr+1{
        MStore.push(0);
    }

    let L = 0;
    let (mut lo,mut hi,mut newL,mut mid,mut k) :(i32,i32,i32,i32,i32);

    //<---- Binary Search begin --->
    for i in 1..lengtharr+1{
        lo = 1;
        hi = L;
        while lo<=hi {
            mid = (lo+hi)/2;
            let mut mid_usize = mid as usize;
            let mut MStore_usize = MStore[mid_usize] as usize;
            if X[MStore_usize[mid_usize]]< X[i]{
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }

        newL = lo;
        PStore[i] = MStore[newL - 1];
        MStore[newL] = i;
        if newL > L {
            L = newL;
        }
    }
}