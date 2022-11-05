public class Tabla {

  private int numero;
  private int limiteTabla;

  public Tabla(int n1, int n2) {
    numero = n1;
    limiteTabla = n2;
  }

  public String TablaCalculator() {
    for (int i = 0; i <= limiteTabla; i++) {
      System.out.println(numero + " * " + i + " = " + (numero * i));
    }
    return null;
  }

}
