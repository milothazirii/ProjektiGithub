#include <iostream> //nuk funksionon? - Gert

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
    return 0; 
}
