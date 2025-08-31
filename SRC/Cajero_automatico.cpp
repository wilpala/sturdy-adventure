#include<iostream>

using namespace std;

int main() {


    int pin = 1238;
    int saldo = 1000;

// "n" es el numeor de intentos que has sido intentatos en el programa

    int n = 0;

    while (n < 3) {
        n = n + 1;

        int pin_input;
        cout<<"¡Por favor, introduce tu pin!"<<endl<<endl;
        cin>>pin_input;

         if (pin == pin_input) {

            n = 0;

            cout<<"¡Pin correcto!"<<endl;
            cout<<"¿Como te podemos ayudar?"<<endl<<endl;

            cout<<"1: Consultar saldo."<<endl<<"2: Hacer un retiro"<<endl;
            int opcion;
            cout<<endl;

            cin>>opcion;

            if (opcion == 1) {
                cout<<"Tu saldo es : $"<<saldo<<"."<<endl<<endl;

                cout<<"¡Gracias por utlizar nuestro servicios!"<<endl;
                cout<<"El programa termina despues de este mensaje"<<endl;


                break;
            }
            else if (opcion == 2) {
                cout<<"¿Cuanto va a retirar?"<<endl;

                double cantidad;
                cin>>cantidad;

                if ((cantidad == 1000) || ((cantidad >= 0) && (cantidad < 1000))) {
                    saldo = saldo - cantidad;

                    cout<<"Tu nuevo saldo es :$"<<saldo<<endl<<endl;

                    cout<<"¡Gracias por utlizar nuestros servicios!"<<endl;
                    cout<<"El programa terminar despues de este mensaje"<<endl;
                }else {
                    cout<<"Saldo no disponible o estas tratando de retirar un numero negativo"<<endl;
                    cout<<"Por seguridad vuelve a introducir tu pin"<<endl;
                    cout<<"Te recomendamos consultar tu saldo antes de tratar de retirar"<<endl;

                }
            }
            else {
                cout<<"¡Esa opcion no esta en el menú!"<<endl<<endl;
                cout<<"Por seguridad vuelve a introducir tu pin"<<endl;


            }
         }
         else {
            cout<<"¡Pin incorrecto!"<<endl<<"Has intentado "<< n <<" veces de un maximo de 3 intentos"<<endl;
         }
    }

    if(n >= 3) {
        cout<<"!Pin bloqueado! Por favor, contactar a su banco. El programa se cerrará por temas de   seguridad en este momento, ¡adios!"<<endl;
    }


    return 0;
}
