fn main() {
    // Interpolamos
    println!("La primera letra del alfabeto: {} y la ultima: {}", 'A', 'Z');

    //Variables
    let number1 = 10;
    let number2 = 20;
    let number3;
    let mut number4 = 40;

    number3 = number1 + number2;

    println!("{} es el número 1", number1);
    println!("{} es el número 2", number2);
    println!("{} es el número 3 es la suma", number3);
    println!("{} es el número 4", number4);
    number4= 41;
    println!("{} es el número 4 después de la modificacion", number4);

    // Propiedad reemplazada
    let rnum = 5;
    let rnum = rnum + 5;
    let rnum = rnum * 2;
    println!("{} es el número reemplazado", rnum);

    // Números
    // Sin Signo
    let n1: i32 = -10;
    // Con Signo
    let n2: i32 = 10;
    println!("{} n1 ---- {} n2", n1, n2);

    // Flotantes
    // Por defecto siempre es f64, no es necesario agregar el :f64
    let nf1: f64 = 10.0;
    // 32 bits
    let nf2: f32 = 20.5;

    println!("{} nf1 ---- {} nf2", nf1, nf2);

    // Operación basica
    println!("la suma es: {}", 100u32 + 50);


    // Booleans
    let b1: bool = true;
    // true false
    println!("{} {}", b1, 1>4);


    // Stringsss
    // Specify the data type "char"
    let character_1: char = 'S';
    let character_2: char = 'f';
    
    // Compiler interprets a single item in quotations as the "char" data type
    let smiley_face = '😃';

    // Compiler interprets a series of items in quotations as a "str" data type and creates a "&str" reference
    let string_1 = "miley ";

    // Specify the data type "str" with the reference syntax "&str"
    let string_2: &str = "ace";

    println!("{} is a {}{}{}{}.", smiley_face, character_1, string_1, character_2, string_2);
}
