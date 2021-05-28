use std::io;

fn main() {
    let mut operation = String::new();
    println!("Enter an operation");
    io::stdin()
        .read_line(&mut operation)
        .expect("Failed to parse input");
}