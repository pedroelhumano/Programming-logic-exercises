fn main() {
    let mymatriz = [1, 2, 3, 4, 5];
    let mymatriz2 = [0; 5];

    println!("matriz1: {} y matriz2: {}", mymatriz[3], mymatriz2[2]);

    let three_nums = vec![15, 3, 46];
    println!("Initial vector: {:?}", three_nums);

    // Declare vector, value = "0", length = 5
    let zeroes = vec![0; 5];
    println!("Zeroes: {:?}", zeroes);

    // Create empty vector, declare vector mutable so it can grow and shrink
    let mut fruit = Vec::new();
    // Push values onto end of vector, type changes from generic `T` to String
    fruit.push("Apple");
    fruit.push("Banana");
    fruit.push("Cherry");
    println!("Fruits: {:?}", fruit);

    println!("Pop off: {:?}", fruit.pop());
    println!("Fruits: {:?}", fruit);

    let mut index_vec = vec![15, 3, 46];
    let three = index_vec[1];
    println!("Vector: {:?}, three = {}", index_vec, three);

    index_vec[1] = index_vec[1] + 5;
    println!("Vector: {:?}", index_vec);
}
