#include <iostream>
using namespace std;
int FR(int n) {
    if (n < 3) 
        return 1; 
    else
        return FR(n - 2) + FR(n - 1); 
}
int main() {
    int n;
    cout << "Podaj numer wyrazu ciagu: ";
    cin >> n;
    cout << n << " wyraz ciagu ma wartosc " << FR(n) << endl;
    return 0;
}
