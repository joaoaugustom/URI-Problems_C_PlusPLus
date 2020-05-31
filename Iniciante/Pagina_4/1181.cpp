// URI Online Judge - 1181
// Linha na Matriz

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double M[12][12], aux = 0;
    int L = 0;
    char T;

    cin >> L;
    cin >> T;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    for (int i = 0; i < 12; i++) {
        aux += M[L][i];
    }
    if (T == 'S') {
        cout << fixed << setprecision(1) << aux << endl;
    }
    
    if (T == 'M') {
        aux /= 12;

        cout << fixed << setprecision(1) << aux << endl;
    }

    return 0;
}
