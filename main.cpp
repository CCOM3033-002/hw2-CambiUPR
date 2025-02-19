// Sebastiab Cambo CambiUPR 801229348
// Sus diapositivas :)

#include <iostream>
using namespace std;

int main(){
  
  // Inicializamos las variables
  int a, b, c, d;
  int opcion;

  cout << "Escoje cual opcion le agrade mas: " << endl;
  cout << "1. Escribir numerador y denominador separadamente" << endl;
  cout << "2. Escribir en forma x/y" << endl;
  cout << "opcion: ";
  cin >> opcion;

  
  // Numeros de la primera fraccion
  if (opcion ==1 ){
    cout << "Escriba el numerador de la primera fraccion: " << endl;
    cin >> a;
    cout << "Escriba el denominador de la primer fraccion: " << endl;
    cin >> b;
  
}  else if (opcion == 2 ){ 
    cout << "Ecriba la primera fraccion en forma x/y:  " << endl;
    cin >> a;
    cin.ignore(); // Para que no ponga /
    cin >> b; 
}  else { 
    cout << "Lo escrito no es valido" << endl;
    return 1; //Para acabarlo si se hace mal

}


// Ahora la segunda fraccion

if(opcion ==1 ){
    cout << "Escriba el numerador de la segunda fraccion: " << endl; 
    cin >> c;
    cout << "Escriba el denominador de la segunda fraccion: "  << endl;
    cin >> d;

} else if (opcion == 2 ) {
    cout << "Escriba la segunda fraccion en forma de x/y: " << endl;
    cin >> c;
    cin.ignore();
    cin >> d;
}
// Usando la forma que nos dieron sumamos las fracciones

int numerador = a * d + b * c;
int denominador = b * d;

// Aqui se ensena lo que se saca
cout << "la suma de las fracciones es: " << numerador << "/" << denominador << endl;



    





  return 0;
}
