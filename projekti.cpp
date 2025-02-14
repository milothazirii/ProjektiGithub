#include <iostream>
#include <cmath>
using namespace std;

double shuma(double a, double b) {
    return a + b;
}

double zbritja(double a, double b) {
    return a - b;
}

double prodhimi(double a, double b) {
    return a * b;
}

double hersi(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Gabim! Eshtë e pamundur të pjestohet me 0." << endl;
        return 0;
    }
}

double rrenje(double a) {
    if (a < 0) {
        cout << "Gabim! Nuk mund të marresh rrënjë nga një numër negativ." << endl;
        return -1;
    }
    return sqrt(a);
}

int main() {
    double numri1, numri2, numriaktual = 0;
    char Pergjigja = 'N';
    char operatori;

    do {
        if (Pergjigja == 'N' || Pergjigja == 'n') {
            cout << "Shkruaj numrin e par: ";
            cin >> numri1;
        } else {
            numri1 = numriaktual;
            cout << "Vazhdoni me rezultatin e meparshem: " << numriaktual << endl;
        }

        cout << "Sheno nje nga keto operatoret (+, -, *, /, r): ";
        cin >> operatori;

        if (operatori == 'r') {
            numriaktual = rrenje(numri1);
            if (numriaktual != -1) {
                cout << "Rrënja katrore e " << numri1 << " është " << numriaktual << endl;
            }
        } else {
            cout << "Shkruaj numrin e dyte: ";
            cin >> numri2;

            switch (operatori) {
                case '+':
                    numriaktual = shuma(numri1, numri2);
                    cout << numri1 << " + " << numri2 << " = " << numriaktual << endl;
                    break;
                case '-':
                    numriaktual = zbritja(numri1, numri2);
                    cout << numri1 << " - " << numri2 << " = " << numriaktual << endl;
                    break;
                case '*':
                    numriaktual = prodhimi(numri1, numri2);
                    cout << numri1 << " * " << numri2 << " = " << numriaktual << endl;
                    break;
                case '/':
                    numriaktual = hersi(numri1, numri2);
                    if (numriaktual != 0) {
                        cout << numri1 << " / " << numri2 << " = " << numriaktual << endl;
                    }
                    break;
                default:
                    cout << "Operatori është gabim, sheno përsëri:" << endl;
                    continue;
            }
        }

        cout << "Deshironi te vazhdoni me kete numer? (P/J): ";
        cin >> Pergjigja;

    } while (Pergjigja == 'P' || Pergjigja == 'p');

    cout << "Faleminderit per perdorimin!" << endl;

    return 0;
}
