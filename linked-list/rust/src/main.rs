
struct Node {
    number i32;
    struct Node next;
}

fn main() {
    printMenu();
}

fn printMenu() {
    println!("\n\n----------------------\nMenu:\n\n");
    println!(" 1 - Insert element; \n");
    println!(" 2 - Print List; \n");
    println!(" 0 - exit; \n");
}