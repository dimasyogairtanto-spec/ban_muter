#include <iostream>
using namespace std;

int main() {
    double diameter_ban_cm;
    double jarak_keseluruhan_km;
    const double pi = 3.141592653589793;

    cout << "Masukkan diameter ban (cm): ";
    cin >> diameter_ban_cm;

    cout << "Masukkan jarak keseluruhan (km): ";
    cin >> jarak_keseluruhan_km;

    double keliling_ban_cm = pi * diameter_ban_cm;
    double jarak_keseluruhan_cm = jarak_keseluruhan_km * 100000;
    double total_putaran = jarak_keseluruhan_cm / keliling_ban_cm;

    cout << "Total putaran ban: " << total_putaran << endl;

    return 0;
}
