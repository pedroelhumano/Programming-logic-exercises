import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        // Variables.
        Scanner SC = new Scanner(System.in);
        float notas[] = new float[6];

        System.out.println("Bienvenido al calculador de notas.");

        for (int i = 0; i < notas.length; i++) {
            System.out.print("Ingrese la nota numero: " + (i + 1) + " ");
            notas[i] = SC.nextFloat();
        }

        Notas notaFinal = new Notas(notas);

        System.out.println("El resultado es: " + notaFinal.calificacionFinal());

        SC.close();
    }
}
