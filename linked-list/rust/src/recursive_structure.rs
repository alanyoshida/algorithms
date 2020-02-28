#[derive(Debug)]
enum List<T> {
    Cons(T, Box<List<T>>),
    Nil,
}

pub fn execute(){
  let list: List<i32> = List::Cons(1,
    Box::new(List::Cons(2, Box::new(List::Nil))));
  println!("{:?}", list);
}
