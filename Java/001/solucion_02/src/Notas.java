public class Notas {

  private float nota1;
  private float nota2;

  public Notas(Float n1, Float n2) {
    // nota1 = n1;
    // nota2 = n2;
    System.out.println("Nota 1 es: " + n1);
    System.out.println("Nota 2 es: " + n2);
  }

  public float calificacion() {
    return (nota1 + nota2);

  }
}
