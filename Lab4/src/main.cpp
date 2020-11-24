#include <iostream>
#include <matrix.h>

int main()
{
    cout << "Tworzenie macierzy konstruktorem (int, int)";
    Matrix m1(4, 4);
    // ustawianie wartosci funckja setValue
    m1.setValue(0, 0, 1);
    m1.setValue(0, 1, 8);
    m1.setValue(0, 2, -3);
    m1.setValue(0, 3, 2);
    m1.setValue(1, 0, 3.2);
    m1.setValue(1, 1, -5);
    m1.setValue(1, 2, 12);
    m1.setValue(1, 3, 5);
    m1.setValue(2, 0, 0);
    m1.setValue(2, 1, -5.89);
    m1.setValue(2, 2, 2);
    m1.setValue(2, 3, 2);
    m1.setValue(3, 0, 9);
    m1.setValue(3, 1, -1);
    m1.setValue(3, 2, 1.01);
    m1.setValue(3, 3, 4);
    m1.print();

    cout << endl << "W macierzy 1 kolumna 3 wiersz 3 jest (liczac od 0): " << m1.getValue(3, 3) << endl;

    cout << endl << "Pobieram macierz 2 z pliku";
    Matrix m2 = Matrix("m2.txt", "D:/Politechnika Studia/JiPP/Lab4");
    m2.print();
    cout << endl << "Mnozenie m2*m1";
    Matrix m3 = m2.multiply(m1);
    m3.print();
    cout << endl << "Wynik mnozenia zapisuje do pliku m3.txt" << endl;
    cout << "Liczba kolumn w m3.txt: " << m3.rows() << endl << "Liczba wierszy: " << m3.cols() << endl;
    m3.store("m3.txt", "D:/Politechnika Studia/JiPP/Lab4");

    cout << endl << "Tworzenie macierzy konstrukotrem (int) i uzupelnienie";
    Matrix m4(4);
    double value = -2;
    for(int i = 0; i < m4.cols(); i++) {
        for (int j = 0; j < m4.rows(); j++) {
            m4.setValue(i, j, value);
            value += 0.5;
        }
    }
    m4.print();

    cout << endl << "Dodawanie m1+m1";
    Matrix m5 = m1.sum(m1);
    m5.print();

    cout << endl << "Odejmowanie m5-m1";
    Matrix m6 = m5.subtract(m1);
    m6.print();

    return 0;
}