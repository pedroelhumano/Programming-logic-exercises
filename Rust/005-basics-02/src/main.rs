struct Persona {
    nombre: String,
    edad: u32,
    altura: String,
}

struct MyTupla (u32, u32, bool);

fn main() {
    // Tupla
    let mytupla = ('P', 5i32, false);
    println!("El primer elemento de la tupla es: {}", mytupla.0);

    // instanciando Structura
    let myperson = Persona {nombre: String::from("Pedro"), edad: 33, altura: ("1.83").to_string()};
    println!("El nombre de la persona es: {} {} {}", myperson.nombre, myperson.edad, myperson.altura);

    //instanciando tupla
    let my_tuple = MyTupla (10, 32, false);
    println!("El primer elemento de la tupla es: {} {} {}", my_tuple.0, my_tuple.1, my_tuple.2);

}
