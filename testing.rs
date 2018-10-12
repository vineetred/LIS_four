use std::env;
#[allow(unused_variables)]

fn main() {
    let args: Vec<String> = env::args().collect();

    let lengtharr = args.len()-1;

    let mut v = Vec::new(); // empty array
    let x = 32;
    // let hello = &args[x].parse::<i32>().unwrap();

    println!("Searching for {}", query);
    println!("In file {}", filename);
    println!("Length: {}",lengtharr );

    // println!("{:?}", args);

    for x in 1..lengtharr+1{
        v.push(&args[x]);
        println!("{}",&args[x] );
        // v.push(hello)
    }
let testt = v[1] - 1;

}
