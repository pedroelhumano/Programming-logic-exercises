import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        // Variables.
        Scanner SC = new Scanner(System.in);
        Notas notas = new Notas(3f, 3f);

        System.out.print(notas.calificacion());

        // System.out.println("Nota 1 es: " + notas);

        // notas.calificacion("hola");

        SC.close();
    }
}
