#include <iostream>
using namespace std;

int main() {
    int hEntrada, mEntrada, hSalida, mSalida;

     cout << "Hora entrada (0-23): ";
     cin >> hEntrada;
     cout << "Minuto entrada (0-59): ";
     cin >> mEntrada;
     cout << "Hora salida (0-23): ";
     cin >> hSalida;
     cout << "Minuto salida (0-59): ";
     cin >> mSalida;

        if (hEntrada < 0 || hEntrada > 23) {
           cout << "Error: Hora de entrada invalida." << endl;
           return 0;
                                                                }
        if (mEntrada < 0 || mEntrada > 59) {
           cout << "Error: Minuto de entrada invalido." << endl;
           return 0;
                                                                 }
         if (hSalida < 0 || hSalida > 23) {
            cout << "Error: Hora de salida invalida." << endl;
            return 0;
                                                                 }
         if (mSalida < 0 || mSalida > 59) {
            cout << "Error: Minuto de salida invalido." << endl;
            return 0;
                                                                }

            cout << "Horas y minutos validos." << endl;

           return 0;
 }
