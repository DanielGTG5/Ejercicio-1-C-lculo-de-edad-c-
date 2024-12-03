#include <stdio.h> /*Contiene los prototipos de las funciones, macros, y tipos para manipular datos de entrada y salida.*/
#include <iostream> /*Parte del a STL que contiene los algoritmos est�ndar, es quiz� la m�s usada e importante (aunque no indispensable).*/
#include <limits> /*Para manejar errores de entrada*/ 
#include <wchar.h> 
#include <locale.h>
/*Lo que hacemos es incluir las librerias wchar.h, que incluye un soporte para amplios tipos de caracteres
y la libreria locale.h con la que se incluye el soporte para distintos tipos de formatos de fecha, moneda, texto, etc.*/

using namespace std;
/*Permite que el compilador busque identificadores en el espacio de nombres std si no est�n declarados*/
/*La instrucci�n using namespace std en C++ permite acceder al espacio de nombres std, donde se encuentra la librer�a est�ndar del lenguaje.*/
/*Permite usar directamente cout en lugar de std::cout*/


int main() {
    int edad;

    /*Solicitar la edad al usuario especificando en n�meros enteros */
    setlocale(LC_ALL, ""); /*setlocale(); sirve para configurar nuestro programa acorde a los par�metros locales de la computadora
 donde se ejecuta el programa, uno de estos par�metros es el idioma.*/
 
    cout << "Ingrese su edad (en n�meros enteros): ";
    cin >> edad;

    /*Validar si la entrada es v�lida referente a lo escrito arriba*/ 
    if (cin.fail() || edad < 0) { 
        cin.clear(); /*Limpia el estado de error de cin*/ 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); /*Descartar entrada inv�lida*/ 
        setlocale(LC_ALL, "");
        cout << "Error: Debe ingresar un n�mero entero positivo v�lido." << endl;
    } else {
        /* Verificar si es mayor o menor de edad*/
        if (edad >= 18) {
            cout << "Usted es mayor de edad." << endl;
        } else {
            cout << "Usted es menor de edad." << endl;
        }
    }

    return 0;
}
