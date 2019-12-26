pub mod first;

pub enum List {
    Empty,
    Elem(i32, List)
}