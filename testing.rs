use std::env;
#[allow(unused_variables)]

fn main() {
    let args: Vec<_> = env::args().collect();

    let lengtharr = args.len()-1;

    let mut v = Vec::new(); // empty array
    let x = 32;
    // let hello = &args[x].parse::<i32>().unwrap();

    // println!("Searching for {}", query);
    // println!("In file {}", filename);
    println!("Length: {}",lengtharr );

    // println!("{:?}", args);

    for x in 0..lengtharr{
        let hello = &args[x].parse::<i32>();
        v.push(hello);
        v.push(1);
        println!("{}",v[x] );
        // v.push(hello)
    }

}