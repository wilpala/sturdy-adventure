#include<iostream>
#include<string>

using namespace std;

int main() {

int opcion;

cout<<"¡Escoger una de las siguientes opciones!"<<endl;
cout<<endl<<endl;
cout<<"1: Dividir la cuenta entre las personas"<<endl;
cout<<"2: Precio total base a los artículos comprados"<<endl;
cout<<endl;

cin>>opcion;


if ((opcion > 0) && (opcion <= 2))
{

    if (opcion == 1)
    {

        double valor_cuenta;
        cout<<"¿Cual es el valor de la cuenta?"<<endl;
        cout<<endl;
        cin>>valor_cuenta;
        cout<<"¡El valor de la cuenta total es: $"<<valor_cuenta<<"!"<<endl;
        cout<<endl;

        int numero_personas;

        cout<<"Ahora, por favor, ¿Cuál es el numero de personas por la cual se dividirá la cuenta?"<<endl;
        cin>>numero_personas;
        cout<<endl;
        cout<<"¡El número de personas que usted es escogió es: "<<numero_personas<<"!"<<endl;
        cout<<endl;

        double valor_individual;

        valor_individual = valor_cuenta / static_cast<double>(numero_personas);


        if ((numero_personas == 0) || (numero_personas < 0))
        {
            cout<<"¡Cena gratis!...No, operacion invalida, por favor rectifica tu respuesta"<<endl;
        }else
        {
            cout<<"¡Cada personas debe pagar: "<<valor_individual<<"!"<<endl;
        }
      }

     else if (opcion == 2)
     {
        cout<<"Formato de multiplicacion '(precio del articulo) operacion (numero de articulos)'"<<endl<<endl;
        cout<<"Ejemplo: 2 * 4, tiene que haber un y solo un espacio entre cada input."<<endl;
        cout<<"O tambien es valido precionar 'enter' despues se cada input."<<endl<<endl;
        


        double precio_articulo;
        cin>>precio_articulo;

        string c;
        cin>>c;

        double numero_articulos;
        cin>>numero_articulos;

        double resultado;

        resultado = numero_articulos * precio_articulo;

        if ((c == "multiplicar") || (c == "*"))
        {
            cout<<"Total a pagar: "<<resultado<<endl;
        }else
        {
            cout<<"¡Esto no es una multiplicación!"<<endl;
        }

     }
     else
     {
            cout<<"¡Opcion no es valida!"<<endl;
     }

}


return 0;

}







