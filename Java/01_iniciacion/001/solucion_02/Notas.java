public class Notas {

  private float nota[] = new float[6];
  private float total = 0.0f;
  private float factor[] = { 0.07f, 0.14f, 0.21f, 0.07f, 0.07f, 0.14f };

  public Notas(float calificaciones[]) {
    nota = calificaciones;
  }

  public float calificacionFinal() {
    for (int i = 0; i < nota.length; i++) {
      total = total + (nota[i] * factor[i]);
    }

    if (total >= 3.5f) {
      System.out.println("Usted tiene derecho al examen final");
    } else {
      System.out.println("Reprobaste");
    }

    return total;
  }
}