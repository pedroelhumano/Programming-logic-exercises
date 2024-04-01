import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        // Bienvenida a la tabla de multiplicar
        System.out.println("Bienvenido a la tablaMultiplicator.v3.0.0");

        // Variables.
        Scanner SC = new Scanner(System.in);
        String isProgramRunning = "si";
        boolean catchingErrores = true;
        int numero;
        int limitTabla;

        // Ciclo infinito para repetir la operacion hasta que se cancele
        while (isProgramRunning.equals("si")) {
            catchingErrores = true;
            System.out.print("Ingresa el numero que se desea conocer la tabla: ");
            numero = SC.nextInt();
            System.out.print("Ingresa hasta donde se desea conocer la tabla de multiplicar: ");
            limitTabla = SC.nextInt();

            Tabla tablamultiplicar = new Tabla(numero, limitTabla);
            tablamultiplicar.TablaCalculator();
            SC.nextLine();

            // Desea repetir?
            while (catchingErrores) {
                System.out.println("¿Desea Repetir?");
                System.out.println("- si");
                System.out.println("- no");
                isProgramRunning = SC.nextLine();

                if (isProgramRunning.equals("si") || isProgramRunning.equals("no"))
                    catchingErrores = false;
                else
                    System.out.println("Ingrese un valor correcto: si o no");
            }
        }
        System.out.println("Adios");
        SC.close();
    }
}
