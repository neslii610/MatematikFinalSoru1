#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale (LC_ALL,"Turkish");

    double a, b, c, delta, x1, x2,x;

    cout << "a katsayýsýný giriniz: ";
    cin >> a;

    cout << "b katsayýsýný giriniz: ";
    cin >> b;

    cout << "c katsayýsýný giriniz: ";
    cin >> c;

    // Diskriminant hesaplama: b^2 - 4ac
    delta = pow(b, 2) - (4 * a * c);
    cout << "Diskriminant (Delta): " << delta << endl;

    if (delta > 0) {
        // Ýki farklý gerçek kök durumu (Delta > 0)
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Denklemin iki farklý gerçek kökü vardýr." << endl;
        cout << "1.kök = " << x1 << endl;
        cout << "2.kök = " << x2 << endl;
    } 
    else if (delta == 0) {
        // Tek bir gerçek kök (çakýþýk kök) durumu (Delta = 0)
        x = -b / (2 * a);
        cout << "Denklemin tek bir gerçek köku vardýr." << endl;
        cout << "Kök = " << x << endl;
    } 
    else {
        // Gerçek kök olmamasý durumu (Delta < 0)
        cout << "Denklemin gerçek kökü yoktur." << endl;
    }

    return 0;
}
