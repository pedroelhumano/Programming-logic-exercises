import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner SC = new Scanner(System.in);
        int dineroEnCuenta = 213;
        int dineroARetirar;
        System.out.println("Bienvenido al banco de la fantasia");
        System.out.println("Usted posee en la cuenta " + dineroEnCuenta);
        System.out.print("Ingrese el monto a retirar:");
        dineroARetirar = SC.nextInt();

        if (dineroARetirar > dineroEnCuenta) {
            System.out.println("No tiene suficiente saldo.");
        } else {
            for (int i = dineroARetirar; i > 0; i--) {
                System.out.println("Despachando billetes: " + i);
            }
            System.out.println("Usted a recibido  " + dineroARetirar);
            System.out.println("Queda en su cuenta  " + (dineroEnCuenta - dineroARetirar));
        }
        SC.close();
    }
}
