import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.FileNotFoundException;

public class rutValidator {

    public static void main(String[] args) throws FileNotFoundException, IOException {
        // Variables generales
        String ruta = "C:\\ruts.txt";
        String[] ruts = new String[4];
        String[] rutsCorrectos = new String[4];
        String[] rutsIncorrectos = new String[4];
        String strAUXrut = "";

        // Creando archivo Correcto
        String rutCorrectos = "C:\\rutCorrectos.txt";
        File file2 = new File(rutCorrectos);
        if (!file2.exists()) {
            file2.createNewFile();
        }

        // Creando archivo incorrecto
        String rutIncorrectos = "C:\\rutIncorrectos.txt";
        File file3 = new File(rutIncorrectos);
        if (!file3.exists()) {
            file3.createNewFile();
        }

        // Empieza Lectura de Archivos
        FileReader fr = new FileReader(ruta);
        BufferedReader br = new BufferedReader(fr);

        // Capturando cada Rut y agregandolo a un arreglo de datos
        for (int i = 0; i < 4; i++) {
            ruts[i] = br.readLine();
        }
        br.close();

        // APLICANDO FORMULA
        for (int i = 0; i < 4; i++) {
            strAUXrut = ruts[i];
            strAUXrut = strAUXrut.replace(".", "");
            strAUXrut = strAUXrut.replace("-", "");

            int AUXrut = Integer.parseInt(strAUXrut.substring(0, strAUXrut.length() - 1));

            char dv = strAUXrut.charAt(strAUXrut.length() - 1);

            int m = 0, s = 1;
            for (; AUXrut != 0; AUXrut /= 10) {
                s = (s + AUXrut % 10 * (9 - m++ % 6)) % 11;
            }
            if (dv == (char) (s != 0 ? s + 47 : 75)) {
                rutsCorrectos[i] = ruts[i];
            } else {
                rutsIncorrectos[i] = ruts[i];
            }
        }

        // AQUI ENVIA LOS RUTS CORRECTOS
        FileWriter fw2 = new FileWriter(file2);
        BufferedWriter bw2 = new BufferedWriter(fw2);
        for (int i = 0; i < 4; i++) {
            if (rutsCorrectos[i] != null) {
                bw2.write(rutsCorrectos[i] + "\n");
            }
        }
        bw2.close();

        // AQUI ENVIA LOS RUTS INCORRECTOS
        FileWriter fw3 = new FileWriter(file3);
        BufferedWriter bw3 = new BufferedWriter(fw3);
        for (int i = 0; i < 4; i++) {
            if (rutsIncorrectos[i] != null) {
                bw3.write(rutsIncorrectos[i] + "\n");
            }
        }
        bw3.close();
    }
}