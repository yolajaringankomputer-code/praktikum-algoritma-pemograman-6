#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout << "PROGRAM MENENTUKAN KELULUSAN" << endl;
    cout << "Masukkan Nilai: ";
    cin >> nilai;

    if (nilai >= 60) {
        if (nilai >= 85) {
            cout << "Grade A - Sangat Baik";
        }
        else if (nilai >= 75) {
            cout << "Grade B - Baik";
        }
        else {
            cout << "Grade C - Cukup";
        }
    }
    else {
        cout << "Tidak Lulus";
    }

    return 0;
}
