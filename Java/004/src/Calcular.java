import java.util.Scanner;

public class Calcular {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);

        String isProgramRunning = "si";
        boolean catchingErrores = true;

        String BaseNum1;
        String BaseNum2;

        while (isProgramRunning.equals("si")) {
            catchingErrores = true;

            System.out.println("Ingrese primer operando");
            BaseNum1 = lectura.nextLine();

            System.out.println("Ingrese segundo operando");
            BaseNum2 = lectura.nextLine();

            Validador Validador = new Validador(BaseNum1, BaseNum2);

            if (Validador.isNumeric()) {

                float num1 = Float.parseFloat(BaseNum1);
                float num2 = Float.parseFloat(BaseNum2);

                System.out.println("El resultado de la suma es " + (num1 + num2));
                System.out.println("El resultado de la resta es " + (num1 - num2));
                System.out.println("El resultado de la multiplicación es " + (num1 * num2));
                if (Validador.isDifferenToZero()) {
                    System.out.println("El resultado de la división es " + (num1 / num2));
                } else {
                    System.out.println("No es posible dividir entre cero");
                }
            } else {
                System.out.println("Debe ingresar caracteres de tipo numerico.");
            }

            while (catchingErrores) {
                System.out.println("¿Desea Repetir?");
                System.out.println("- si");
                System.out.println("- no");
                isProgramRunning = lectura.nextLine();

                if (isProgramRunning.equals("si") || isProgramRunning.equals("no"))
                    catchingErrores = false;
                else
                    System.out.println("Ingrese un valor correcto: si o no");
            }
        }
        lectura.close();
    }
}