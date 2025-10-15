#include <iostream>
using namespace std;
int main() {
    int i, j, k, n, m, t;
    cout << "Quanto è grande il primo vettore?" << endl;
    cin >> n;
    cout << "Quanto è grande il secondo vettore?" << endl;
    cin >> m;
    int v1[n];
    int v2[m];
    i = 0;
    j = 0;
    while (i < n) {
        v1[i] = rand() % 100;
        i = i + 1;
    }
    while (j < n) {
        v2[j] = rand() % 100;
        j = j + 1;
    }
    bool scambio;
    scambio = true;
    i = 0;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - j) {
            if (v1[i] > v1[i + 1]) {
                scambio = true;
                t = v1[i];
                v1[i] = v1[i + 1];
                v1[i + 1] = t;
            }
            i = i + 1;
        }
        j = j + 1;
    }
    i = 0;
    while (i < n) {
        cout << v1[i] << endl;
        i = i + 1;
    }
    scambio = true;
    j = 0;
    while (j <= m - 1 && scambio) {
        scambio = false;
        i = 0;
        while (i <= m - 2 - i) {
            if (v2[j] > v2[j + 1]) {
                scambio = true;
                t = v2[j];
                v2[j] = v2[j + 1];
                v2[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    j = 0;
    while (j < m) {
        cout << v2[j] << endl;
        j = j + 1;
    }
    int v3[""];
    i = 0;
    j = 0;
    k = 0;
    while (i <= n - 1 && j <= n - 1) {
        if (v1[i] <= v2[j]) {
            v3[k] = v1[i];
            i = i + 1;
        } else {
            v3[k] = v2[j];
            j = j + 1;
        }
        k = k + 1;
    }
    while (i <= n - 1) {
        v3[k] = v1[i];
        k = k + 1;
        i = i + 1;
    }
    while (i <= n - 1) {
        v3[k] = v2[j];
        k = k + 1;
        j = j + 1;
    }
    return 0;
}