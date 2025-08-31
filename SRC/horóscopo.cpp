#include<iostream>
#include<cstdlib>

using namespace std;

int main() {

    cout<<"¡Bienvenidos a Zodiacal!"<<endl<<endl;
    cout<<"Por favor, danos tu mes y dia de nacimiento."<<endl<<endl;

    int dia;
    cout<<"Por favor introduzca su día de nacimiento"<<endl;
    cin>>dia;

    int mes;
    cout<<"Ahora su mes de nacimiento, por favor."<<endl;
    cin>>mes;

    cout<<endl;

    if(((mes > 0) && (mes <= 12)) && ((dia > 0) && (dia <= 31))) {
        if(((mes == 3) && (dia >= 21)) || ((mes == 4) && (dia <= 19))) {
            cout<<"Eres Aries"<<endl;
            cout<<endl;
            cout<<"Algo te esta molestando ultimamente, y no queres que nadie lo sepa"
            <<" pero recuerda, que no siempre tienes que ser la persona fuerte,"
            <<" la próxima vez que alguien te brinde ayuda ¡Tómala!"<<endl;
        }
        else if (((mes == 4) && (dia > 19)) || ((mes == 5) && (dia <=20))) {
            cout<<"Eres Tauro"<<endl;
            cout<<endl;
            cout<<"Siempre optimista, tienes mucha energia social, "
            <<"pero recuerda balaciarlo con un poco de realismo, no todas las personas son de fiar"<<endl;

        }
        else if (((mes == 5) && (dia >= 21))  || ((mes == 6) && (dia < 21))) {
            cout<<"Eres Géminis"<<endl;
            cout<<endl;
            cout<<"La paciencia es una virtud, tienes mucha. Pero, no es bueno llevar todo a la ligera "
            <<"aveces hay que actuar y pensar rapido"<<endl;
        }

        else if (((mes == 7) && (dia < 23)) || ((mes == 6) && (dia >= 21))) {
            cout<<"Eres Cancer"<<endl;
            cout<<endl;
            cout<<"La miseria ama la compañía, no te llevar por las actitudes negativas de los demas"
            <<" tu solo sigue brillando el mundo necesita tu luz"<<endl;

        }
        else if (((mes == 8) && (dia < 23)) || ((mes == 7) && (dia >= 23))) {
            cout<<"Eres Leo"<<endl;
            cout<<endl;
            cout<<"Amigos de todos pero a la vez de nadie, siempre utlizas todo con inteligencia "<<endl
            <<"Pero, a veces es bueno dejar a la suerte alguna cosas y diafrutar el viaje"<<endl;


        }

        else if (((mes == 9) && (dia < 23)) || ((mes == 8) && (dia >= 23))) {
            cout<<"Eres Virgo"<<endl;
            cout<<endl;
            cout<<"Eres bueno con todo el mundo, tienes un corazon de miel."<<endl
            <<" Solo recuerda escoger bien en quien confias, este mundo es cruel"<<endl;

        }

        else if (((mes == 10) && (dia < 23)) || ((mes == 9) && (dia >= 23))) {
            cout<<"Eres Libra"<<endl;
            cout<<endl;
            cout<<"A veces un poco malhumorado, pero tienes buenas intenciones."<<endl
            <<"Recuerda que no los demas tambien son afectados por tu actitud"<<endl;

        }

        else if (((mes == 11) && (dia < 22)) || ((mes == 10) && (dia >= 23))) {
            cout<<"Eres Escorpio"<<endl;
            cout<<endl;
            cout<<"Muchas personas no tienen la culpa de como son"<<endl
            <<"Pero tu has forjado tu personalidad ladrillo por ladrillo, no dejes que la cambien los demas"<<endl;

        }

        else if (((mes == 12) && (dia < 22)) || ((mes == 11) && (dia >= 22))) {
            cout<<"Eres Sagitario"<<endl;
            cout<<endl;
            cout<<"Esta pensando en hablar con alguein con quien no hablas desde hace mucho"<<endl
            <<"No lo pienses, llama"<<endl;

        }

        else if (((mes == 1) && (dia < 20)) || ((mes == 12) && (dia >= 22))) {
            cout<<"Eres Capricornio"<<endl;
            cout<<endl;
            cout<<"Veo grandes negocios en camino, pero tienes que confiar en el proceso"<<endl;

        }

        else if (((mes == 2) && (dia < 19)) || ((mes == 1) && (dia >= 20))) {
            cout<<"Eres Acuario"<<endl;
            cout<<endl;
            cout<<"Veo un 5.0 en la tarea de pensamiento algorítmico para ti"<<endl;

        }

        else if (((mes == 3) && (dia < 21)) || ((mes == 2) && (dia >= 19))) {
            if((mes == 2) && (dia > 29)) {
                cout<<"Febrero solo tiene 29 dias como maximo"<<endl;
                exit(0);
            }
           cout<<"Eres Piscis"<<endl;
           cout<<endl;
           cout<<"La vida es hermosa, pero si la vives con esa persona a la que has ignorado, ¡cuidala!"<<endl;


        }





    }
    else{
        cout<<"¡Algo salio mal!"<<endl;
        cout<<"Pero dejeme te digo algo...veo un profesor.... sí, un profesor de pensamiento algorítmico."<<endl;
        cout<<endl;
        cout<<"El profesor esta...esta..."<<endl;
        cout<<"Dandonos una nota de entre 5 y 4.0 en este trabajo"<<endl;
        cout<<":)"<<endl<<endl;
        cout<<"Aqui termina el programa"<<endl;



    }




    return 0;
}
