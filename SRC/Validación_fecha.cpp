#include<iostream>
#include<cstdlib>

using namespace std;

int main() {

    int mes_actual = 9;
    int dia_actual = 2;
    int año_actual = 2025;

    cout<<"¡Saludos! Tememos una promocion válida para clientes que cumplen años este mes"<<endl<<endl;
    cout<<"Introcuce tu fecha de nacimiento para verficar"<<endl<<endl;

    cout<<"¿En qué día nació usted? solo en numeros, por favor"<<endl<<endl;
    int dia;
    cin>>dia;

    cout<<"¿En qué mes nació usted? solo numeros, por favor"<<endl;

    int mes;
    cin>>mes;

    cout<<"¿En qué año nació usted? solo numeros, por favor"<<endl;


    int año;
    cin>>año;

    if(((mes <= 12) && (mes > 0)) && ((dia > 0) && (dia <= 31)) && ((año <= año_actual) && (año >= 1903))) {


      if((año == año_actual) && (mes >= mes_actual) && (dia > dia_actual)) {
        cout<<"Hm...curioso, aun no haz nacido. Lo siento, el descuento solo esta disponible para gente que ya existe"<<endl;
        cout<<"El programa terminará aquí, vuelve cuando hayas nacido :)"<<endl;
        exit(0);

      }

      if((mes == 2) && (dia > 29)) {
        cout<<"Febrero no tiene mas de 29 dias"<<endl;
        cout<<"El programa teeminara aquí, revisa la fecha y vuelve a intentarlo"<<endl;
        exit(0);
      }



       switch (mes) {
          case 1:
            cout<<"Su fecha de nacimiento es: "<<dia<<" de Enero del "<<año<<endl<<endl;
            cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

            int elegir;
            cin>>elegir;
            cout<<endl;

            if(elegir == 1) {
              cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
              cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
              cout<<"Gracias por ser un cliente fiel."<<endl;
              break;
            }

            else if (elegir == 2) {
              cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
              break;

            }
            else {
              cout<<"opcion no valida, por favor intenta otra vez."<<endl;
              cout<<"El programa se reiniciará aqui."<<endl;
              break;
            }

          case 2:
              cout<<"Su fecha de nacimiento es: "<<dia<<" de Febrero del "<<año<<endl<<endl;
              cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;


              int elegir1;
              cin>>elegir1;
              cout<<endl;

              if(elegir1 == 1) {
                 cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
                 cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
                 cout<<"Gracias por ser un cliente fiel."<<endl;
                 break;
               }

              else if (elegir1 == 2) {
                 cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                 break;

               }
              else {
                 cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                 cout<<"El programa se reiniciará aqui."<<endl;
                 break;
               }
            case 3:
               cout<<"Su fecha de nacimiento es: "<<dia<<" de Marzo del "<<año<<endl<<endl;
               cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

               int elegir2;
               cin>>elegir2;
               cout<<endl;

               if(elegir2 == 1) {
                  cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
                  cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
                  cout<<"Gracias por ser un cliente fiel."<<endl;
                  break;
                }
                else if (elegir2 == 2) {
                  cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                  break;

                }
                else {
                  cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                  cout<<"El programa se reiniciará aqui."<<endl;
                  break;
                }
              case 4:
                cout<<"Su fecha de nacimiento es: "<<dia<<" de Abril del "<<año<<endl<<endl;
                cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

                int elegir3;
                cin>>elegir3;
                cout<<endl;

                if(elegir3 == 1) {
                   cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
                   cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
                   cout<<"Gracias por ser un cliente fiel."<<endl;
                   break;
                 }

                 else if (elegir3 == 2) {
                   cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                   break;
                 }

                 else {
                   cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                   cout<<"El programa se reiniciará aqui."<<endl;
                   break;
                 }

               case 5:
                    cout<<"Su fecha de nacimiento es: "<<dia<<" de Mayo del "<<año<<endl<<endl;
                    cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

                    int elegir4;
                    cin>>elegir4;
                    cout<<endl;

                    if(elegir4 == 1) {
                        cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
                        cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
                        cout<<"Gracias por ser un cliente fiel."<<endl;
                        break;

                    }
                    else if (elegir4 == 2) {
                       cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                       break;
                    }
                    else {
                       cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                       cout<<"El programa se reiniciará aqui."<<endl;
                       break;

                  case 6:
                       cout<<"Su fecha de nacimiento es: "<<dia<<" de Junio del "<<año<<endl<<endl;
                       cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

                       int elegir5;
                       cin>>elegir5;
                       cout<<endl;

                       if(elegir5 == 1) {
                         cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
                         cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
                         cout<<"Gracias por ser un cliente fiel."<<endl;
                         break;

                       }

                       else if (elegir5 == 2) {
                         cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                         break;
                       }

                       else {
                         cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                         cout<<"El programa se reiniciará aqui."<<endl;
                         break;
                        }

                    case 7:
                        cout<<"Su fecha de nacimiento es: "<<dia<<" de Julio del "<<año<<endl<<endl;
                        cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

                        int elegir6;
                        cin>>elegir6;
                        cout<<endl;

                        if(elegir6 == 1) {
                            cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
                            cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
                            cout<<"Gracias por ser un cliente fiel."<<endl;
                            break;
                            }

                        else if (elegir6 == 2) {
                            cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                            break;

                        }

                        else {
                             cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                             cout<<"El programa se reiniciará aqui."<<endl;
                             break;

                        }

                      case 8:
                        cout<<"Su fecha de nacimiento es: "<<dia<<" de Agosto del "<<año<<endl<<endl;
                        cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

                        int elegir7;
                        cin>>elegir7;
                        cout<<endl;

                        if(elegir7 == 1) {
                            cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
                            cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
                            cout<<"Gracias por ser un cliente fiel."<<endl;
                            break;

                        }

                        else if (elegir == 2) {
                            cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                            break;

                        }

                        else {
                            cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                            cout<<"El programa se reiniciará aqui."<<endl;
                            break;

                        }

                      case 9:

                        cout<<"Su fecha de nacimiento es: "<<dia<<" de Septiembre del "<<año<<endl<<endl;
                        cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

                        int elegir8;
                        cin>>elegir8;
                        cout<<endl;

                        if(elegir8 == 1) {
                            cout<<"Apreciado cliente, en tu mes queremos darte un descuento del 50%."<<endl<<endl;
                            cout<<"Tu codigo es: 'DESDE SEPTIEMBRE SE SIENTE DICIEMBRE50'."<<endl<<endl;
                            cout<<"Gracias por ser un cliente fiel."<<endl;
                            break;

                        }

                        else if (elegir8 == 2) {
                            cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                            break;

                        }

                        else {
                            cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                            cout<<"El programa se reiniciará aqui."<<endl;
                            break;

                        }

                     case 10:

                       cout<<"Su fecha de nacimiento es: "<<dia<<" de Octubre del "<<año<<endl<<endl;
                       cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

                       int elegir9;
                       cin>>elegir9;
                       cout<<endl;

                       if(elegir9 == 1) {
                           cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
                           cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
                           cout<<"Gracias por ser un cliente fiel."<<endl;
                           break;

                       }

                       else if (elegir9 == 2) {
                           cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                           break;

                       }
                       else {
                            cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                            cout<<"El programa se reiniciará aqui."<<endl;
                            break;

                       }

                     case 11:
                        cout<<"Su fecha de nacimiento es: "<<dia<<" de Noviembre del "<<año<<endl<<endl;
                        cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

                        int elegir10;
                        cin>>elegir10;
                        cout<<endl;

                        if(elegir10 == 1) {
                            cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
                            cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
                            cout<<"Gracias por ser un cliente fiel."<<endl;
                            break;

                        }

                        else if (elegir10 == 2) {
                            cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                            break;

                        }

                        else {
                            cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                            cout<<"El programa se reiniciará aqui."<<endl;
                            break;

                        }

                     case 12:
                        cout<<"Su fecha de nacimiento es: "<<dia<<" de Dicimebre del "<<año<<endl<<endl;
                        cout<<"¿Es eso corecto? "<<endl<<endl<<"Eligir 1: Si."<<endl<<"Eligir 2: No."<<endl;

                        int elegir11;
                        cin>>elegir11;
                        cout<<endl;

                        if(elegir11 == 1) {
                            cout<<"Apreciado cliente, por el momento, el descuento no esta disponible para usted."<<endl;
                            cout<<"Pero, tan pronto tengamos un descuento para usted, nos comunicaremos."<<endl<<endl;
                            cout<<"Gracias por ser un cliente fiel."<<endl;
                            break;

                        }

                        else if (elegir11 == 2) {
                            cout<<"!Oh! Perdón, el programa se reiniciará para que pueda darnos la fecha correcta."<<endl;
                            break;

                        }

                        else {
                            cout<<"opcion no valida, por favor intenta otra vez."<<endl;
                            cout<<"El programa se reiniciará aqui."<<endl;
                            break;

                        }




















                      }






      }



  }
  else {
    cout<<"¡Algo salio mal!"<<endl<<endl;
    cout<<"Puede ser que tienes mas de 122 años, "
    <<"en dado caso, no solo te debemos un descuento, pero tambien un Record Guinness"<<endl<<endl;
    cout<<"O tal vez nos has dado una fecha de mes o de dia que nos es valida"<<endl;
    cout<<"O tambien puede ser que no hayas nacido :0, o simplemente la fecha no es valida"<<endl;




    cout<<endl<<endl<<"El programa terminará aqui :)"<<endl;



  }

















    return 0;

}
