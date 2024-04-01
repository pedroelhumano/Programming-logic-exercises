      ******************************************************************
      * Author:
      * Date:
      * Purpose:
      * Tectonics: cobc
      ******************************************************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. SALUDO.

       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 SALUDO PIC A(17).
       01 TITULO PIC A(17) VALUE "Tutorial de Cobol".
       01 NUMERO PIC 9(1) VALUE 5.

       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           DISPLAY "Hello world".
           MOVE "soy Pedro saludos" TO SALUDO.
           DISPLAY "Muy buenas, " SALUDO.
           DISPLAY TITULO.
           DISPLAY "El numero es: " NUMERO.
           STOP RUN.
       END PROGRAM SALUDO.
