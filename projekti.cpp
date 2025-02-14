#include <iostream>
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

        cout << "Sheno nje nga keto operatoret (+, -, *, /): ";
        cin >> operatori;

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

        cout << "Deshironi te vazhdoni me kete numer? (Y/N): ";
        cin >> Pergjigja;

    } while (Pergjigja == 'Y' || Pergjigja == 'y');

    cout << "Faleminderit per perdorimin!" << endl;

    return 0;
}
