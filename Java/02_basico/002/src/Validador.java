public class Validador {

  private String numero1;
  private String numero2;

  public Validador(String n1, String n2) {
    numero1 = n1;
    numero2 = n2;
  }

  public Boolean isNumeric() {

    try {
      Float.parseFloat(numero1);
      Float.parseFloat(numero2);
      return true;
    }

    catch (Exception e) {
      return false;
    }
  }

  public Boolean isDifferenToZero() {
    float num2;
    num2 = Float.parseFloat(numero2);

    if (num2 != 0.0)
      return true;
    return false;
  }
}
