## Calculadora en Java
Instrucción general de la actividad:

### Presentación del caso

A continuación, se presenta un programa en Java que realiza las 4 operaciones matemáticas básicas para 2 números que se ingresan por teclado.

```java
package calcular;

import java.util.Scanner;

public class Calcular {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        double num1=0.0;
        double num2=0.0;

        System.out.println("Ingrese primer operando");

        num1 = lectura.nextDouble();

        System.out.println("Ingrese segundo operando");

        num2 = lectura.nextDouble();

        System.out.println("El resultado de la suma es "+(num1+num2));

        System.out.println("El resultado de la resta es "+(num1-num2));

        System.out.println("El resultado de la multiplicación es "+(num1*num2));

        System.out.println("El resultado de la división es "+(num1/num2));
    }
}
```

### Preguntas asociadas al caso

1-      ¿Cuál es el error que podría cancelar el programa en una de las operaciones, dependiendo de los valores ingresados por el usuario?

2-      ¿Cómo se podría evitar que los datos ingresados provoquen un error en el programa?

3-      ¿Qué validaciones se podrían incorporar para asegurar el ingreso de datos correctos?

4-      ¿Qué debiera incorporarse para que el programa se ejecute varias veces hasta que el usuario indique que no desea ingresar más valores?