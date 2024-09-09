fn main() {
    println!("Hello, world!");

    let total = suma("El texto de la suma:", 10, 11);

    println!("La suma es: {}", total);
}

fn suma(text: &str, num1: u32, num2: u32) -> u32 {
    // println!("{} {} + {}", text, num1, num2);
    println!("el texto ingresado fue {}", text);
    if num1 == num2 {
        return num1;
    }
    num1 + num2
}
