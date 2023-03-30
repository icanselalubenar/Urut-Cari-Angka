#include <iostream>

using namespace std;

void sortDesc(int *array, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        for(int j = i + 1; j < SIZE; j++)
        {
            if(array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {

    int SIZE;
    cout << "Input jumlah elemen nilai array : ";
    cin >> SIZE;

    int *array = new int[SIZE];

    for(int i = 0; i < SIZE; i++) {
        cout << "Masukkan nilai ke " << i+1 << " = ";
        cin >> array[i];
    }

    system("cls");

    cout << "Berikut adalah nilai-nilai yang di input oleh user : ";
    cout << "{ ";
    for(int i = 0; i < SIZE; i++) {
        cout  << array[i];
        if (i < SIZE - 1)
        {
            cout << ", ";
        }
    }
    cout << " }" << endl;

    sortDesc(array, SIZE);

    cout << "Nilai diurutkan secara descending (menurun) : ";
    for(int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl << endl;

    int *s;
    int cariAngka;
    cout << "Masukkan nilai yang mau dicari: ";
    cin >> cariAngka;

    s = array;
    while(s < array + SIZE) {
        if(*s == cariAngka) {
            cout << "Nilai yang anda cari [" << cariAngka << "] telah ditemukan." << endl;
            break;
        }
        s++;
    }
    if(s == array + SIZE) {
        cout << "Nilai yang anda cari [" << cariAngka << "] tidak ditemukan." << endl;
    }

    delete[] array;
    return 0;
}
