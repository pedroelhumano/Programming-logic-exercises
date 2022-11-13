import java.util.Scanner;

public class Calcular {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        double num1 = 0.0;
        double num2 = 0.0;

        System.out.println("Ingrese primer operando");

        num1 = lectura.nextDouble();

        System.out.println("Ingrese segundo operando");

        num2 = lectura.nextDouble();

        System.out.println("El resultado de la suma es " + (num1 + num2));

        System.out.println("El resultado de la resta es " + (num1 - num2));

        System.out.println("El resultado de la multiplicación es " + (num1 * num2));

        System.out.println("El resultado de la división es " + (num1 / num2));

        lectura.close();
    }
}