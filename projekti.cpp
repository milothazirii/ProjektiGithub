#include <iostream> 

using namespace std;

double shuma(int a,int b){
return a+b;
}
double zbritja(int a, int b){
  return a-b;
}
double prodhimi(int a,int b){
  return a*b;
}
double hersi(int a,int b){ //ndoshta duhet nderrimi i emrave te variablabe? - Gert
  if (b != 0) {
        return a / b;
    } else {
        cout << "Gabim! eshte e pamundur te pjestohet me 0." << endl;
        return 0; 
    }
}

int main(){
    double numri1;
    double numri2;
    char operatori;
  
    cout << "Shkruaj numrin e par: ";
    cin >> numri1;

    cout << "Sheno njerin nga keto operatoret (+, -, *, /): ";
    cin >> operatori;

    cout << "Shkruaj numrin e dyt: ";
    cin >> numri2;

  switch(operatori) {
        case '+':
            cout << numri1 << " + " << numri2 << " = " << shuma(a,b) << endl;
            break;
        case '-':
            cout << numri1 << " - " << numri2 << " = " << zbritja(a,b) << endl;
            break;
        case '*':
            cout << numri1 << " * " << numri2 << " = " << prodhimi(a,b) << endl;
            break;
        case '/':
            cout << numri1 << " / " << numri2 << " = " << hersi(a,b);
            break;
        default:
            cout << "Operatori eshte gabim" << endl;
            break;
    }
    return 0; 
}
