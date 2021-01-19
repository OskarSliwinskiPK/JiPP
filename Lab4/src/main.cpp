#include <iostream>
#include <matrix.h>


void tests(){
    cout << "----- Testy -----" << endl << endl;
    try {
        cout << "Tworzenie macierzy 0x2" << endl;
        Matrix(0,2);   
    } catch(invalid_argument &e)
    {
        cout << "[ERROR] " << e.what() << endl;
    }

    try {
        cout << "Tworzenie macierzy -1x-1" << endl;
        Matrix(-1);   
    } catch(invalid_argument &e)
    {
        cout << "[ERROR] " << e.what() << endl;
    }

    Matrix mtests(3);
    try {
        cout << "Pobranie wartosci (-1,2) z macierzy 3x3" << endl;
        mtests.getValue(-1,2);  
    } catch(out_of_range &e)
    {
        cout << "[ERROR] " << e.what() << endl;
    }

    try {
        cout << "Ustawienie wartosci (2,-3) w macierzy 3x3" << endl;
        mtests.setValue(2,-3, 1);  
    } catch(out_of_range &e)
    {
        cout << "[ERROR] " << e.what() << endl;
    }

    Matrix mtests2(2,3);
    try {
        cout << "Dodawanie macierzy 3x3 do 2x3" << endl;
        mtests = mtests + mtests2; 
    } catch(invalid_argument &e)
    {
        cout << "[ERROR] " << e.what() << endl;
    }
    try {
        cout << "Odejmowanie macierzy 3x3 do 2x3" << endl;
        mtests = mtests - mtests2; 
    } catch(invalid_argument &e)
    {
        cout << "[ERROR] " << e.what() << endl;
    }

    Matrix mtests3(3,2);
    Matrix mtests4(5,4);
    try {
        cout << "Mnozenie macierzy 3x2 do 5x4" << endl;
        mtests = mtests * mtests2; 
    } catch(invalid_argument &e)
    {
        cout << "[ERROR] " << e.what() << endl;
    }

    try {
        cout << "Proba zaladowania macierzy z nieistniejacego pliku" << endl;
        Matrix mtestsfile = Matrix("m2.txt", "D:/Politechnika Studia");
    } catch(runtime_error  &e)
    {
        cout << "[ERROR] " << e.what() << endl;
    }

    try {
        cout << "Proba zapisania macierzy do blednej lokalizacji pliku" << endl;
        mtests4.store("", "");
    } catch(runtime_error  &e)
    {
        cout << "[ERROR] " << e.what() << endl;
    }
}

int main()
{
    tests();

    cout << "\n\nTworzenie macierzy konstruktorem (int, int)";
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
    Matrix m7 = Matrix("m2.txt", "D:/Politechnika Studia/JiPP/Lab4");
    m2.print();
    cout << endl << "Wynik porownywanie tych samych macierzy:   " << (m2==m7) << endl;
    cout << "1 = True   0 = False" << endl;
    cout << endl << "Mnozenie m2*m1";
    Matrix m3 = m2 * m1;
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
    Matrix m5 = m1 + m1;
    m5.print();

    cout << endl << "Odejmowanie m5-m1";
    Matrix m6 = m5 - m1;
    m6.print();



    return 0;
}