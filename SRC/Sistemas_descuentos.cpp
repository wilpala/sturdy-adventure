#include<iostream>
#include<cstdlib>

using namespace std;

int main() {

    int vip_code = 9850;

    cout<<"Usuarios vip tiene un 20% de descuento en toda compra"<<endl;
    cout<<endl;
    cout<<"Por favor introduce tu codigo de 4 digitos"<<endl<<endl;


    int user_code;
    cin>>user_code;

    cout<<"¿Cuántos items compraste?"<<endl;

    int number_items;
    cin>>number_items;

    if(number_items < 0) {
        cout<<"¿Nos estas devolviedo items? Recuerda no numeros negativos"<<endl;
        exit(0);

    } else if(number_items == 0) {
        cout<<"Debes hacer al menos 1 compra"<<endl;
        exit(0);
    }



    if(user_code == vip_code) {
        cout<<"Este es tu codigo de descuento del 20% : VIPCODE"<<endl;

        cout<<"¿Cuantos items compraste?"<<endl;

        if(number_items >= 4){
            cout<<"Además, de tu 20%, ya que compraste 4 o mas items"
            <<" aqui tienes tu codigo de 10%: +FOURCODE"<<endl;

        }




    }else {
        cout<<"No eres usuario VIP"<<endl;
        cout<<endl;
        cout<<"Pero recuerda que si compras 4 o mas items"
        <<" tienes una descuento del 10%"<<endl<<endl;

        cout<<"Vamos a verificar cuantas compras haz hecho"<<endl<<endl;
        cout<<"Compraste "<<number_items<<" items."<<endl<<endl;
        cout<<"Gracias por su compra";



        if(number_items >= 4) {
            cout<<"Ya que compraste 4 o mas de 4 items"
            <<" toma tu codigo de 10%: +FOURCODE"<<endl;
            cout<<endl;
        }
    }




    return 0;
}
