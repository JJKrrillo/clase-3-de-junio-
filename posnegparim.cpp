#include <iostream>
using namespace std;

string paroimpar(int x) {
    if (x % 2 == 0) {
        return "par";
    } else {
        return "impar";
    }
}

string posoneg(int x) {
    if (x >= 0) {
        return "positivo";
    } else {
        return "negativo";
    }
}

int main() {
    int a;

    cout << "Ingresa el valor de a: ";
    cin >> a;

    cout << "El numero es " << paroimpar(a) << " y " << posoneg(a) << endl;

    return 0;
}