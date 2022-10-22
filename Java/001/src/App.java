import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        // Variables.
        float nota[] = new float[6];
        float factor[] = { 0.07f, 0.14f, 0.21f, 0.07f, 0.07f, 0.14f };
        float notasFinal[] = new float[6];
        float total = 0.0f;
        Scanner SC = new Scanner(System.in);

        // INICIO
        System.out.println("Bienvenido a calculo de notas");

        // Ingreso de notas.
        for (int i = 0; i < notasFinal.length; i++) {
            // Se guarda la nota
            System.out.println("Ingrese la nota numero: " + (i + 1));

            nota[i] = SC.nextFloat();
            notasFinal[i] = nota[i] * factor[i];
            // El total que se va a mostrar al final
            total = total + notasFinal[i];
        }

        // FINAL
        System.out.println("Tu nota es final es " + total);
        // Caso aprobado solo mayor o igual a 4. Esto el ejercicio no lo indica, es un
        // supuesto.
        if (total >= 4) {
            System.out.println("Usted puede presentar el examen final");
        }
        // Caso reprobado
        else {
            System.out.println("Reprobaste");
        }
        SC.close();
    }
}
