mod first;
mod second;
mod recursive_structure;

fn main() {
    println!("\n## Recursive Structure");
    recursive_structure::execute();

    println!("\n## First Linked List");
    first::execute();

    println!("\n## Second Linked List");
    second::execute();
}
