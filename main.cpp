#include <iostream> 
#include <iomanip>
using namespace std;

void menu();

int main(){

    menu();
}

void menu(){

    char opcion;

    //Códigos de colores para usar en el texto
    const string ROJO = "\x1B[31m", VERDE = "\x1B[32m", RESET = "\033[37m";

    //ciclo do while para que se despliega al menos una vez el menú 
    do{

    //Presentación del juego
    cout << ROJO << "\n----------------------------------\n";
    cout << setw(14) << ROJO << "🃁 🂡 BLACKJACK 🃑 🂱" << RESET << endl;
    cout << ROJO << "----------------------------------\n";

    //Menú con las opciones principales
    cout << "\nSeleccione una opción: " << endl;

    cout << VERDE << "\n[1] JUGAR"  << endl;
    cout << "[2] REGLAS DE JUEGO" << endl;
    cout << "[3] SALIR DEL PROGRAMA\n" << RESET << endl;

    //El usuario selecciona una opción
    cin >> opcion;

    //Se utiliza un switch para cada caso según el número que seleccione el jugador
    switch (opcion){

        //Si el usuario ingresa 1 se invoca la función con el juego
        case '1': cout << "\n(se invoca el juego...)" << endl;
            break;
        
        //Si el usuario ingresa 2 se muestran las instrucciones del juego
        case '2': cout << "\nINSTRUCCIONES DEL JUEGO: " << endl;
                  cout << "\n ♥️ El objetivo del juego es acercarse lo más posible a 21 sin pasarse del número. " << endl;
                  cout << " ♣️ Después de tener 2 cartas, tendrá la opción de tomar otra carta (hit) o quedarse con la cantidad que tenga(stand). " << endl;
                  cout  << " ♦️ Usted compite contra el dealer, quien también busca acercarse lo más posible a 21. " << endl;
                  cout << " ♠️ Usted gana si obtiene 21 o el número menor más cercano, o si la suma de las cartas del dealer es mayor a 21" << endl;
            break; 
        
        //Si el usuario ingresa 3 se termina de ejecutar el programa
        case '3': 
            break;
        
        //Si el usuario no ingresa ninguna de las opciones anteriores se le pide ingresar una opción válida
        default: 
            cout << "\nIngrese una opción válida:  " << endl;
    }
    
}
    //El ciclo se repite si el usuario entra al menú de instrucciones o si ingresa una opción inválida
    while(opcion != '1' && opcion != '3');

}


//https://www.crehana.com/blog/estilo-vida/guia-reglas-blackjack/

cout << "algorando," << endl;

cout << "algomas" << endl;