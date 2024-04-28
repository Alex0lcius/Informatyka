#include <iostream>

using namespace std;

void BSort(int tab[], int n) {
    int temp;

    for (int i = 0; i < n; ++i) {
        for (int t = 1; t < n - i; ++t) {
            if (tab[t - 1] > tab[t]) {
                temp = tab[t - 1];
                tab[t - 1] = tab[t];
                tab[t] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Wprowadź liczbę elementów do sortowania: ";
    cin >> n;

    int tab[n];
    cout << "Wprowadź elementy tablicy: ";
    for (int i = 0; i < n; ++i)
        cin >> tab[i];

    cout << "\nTablica przed sortowaniem:" << endl;
    for (int i = 0; i < n; ++i)
        cout << tab[i] << " ";
    cout << endl;

    cout << "\nRozpoczęcie sortowania" << endl;
    BSort(tab, n);

    cout << "\nTablica po sortowaniu:" << endl;
    for (int i = 0; i < n; ++i)
        cout << tab[i] << " ";
    cout << endl;

    return 0;
}
