#include <iostream>
#include <string>

using namespace std;

class Matrix {
    public:
        // konstruktory
        Matrix(int cols, int rows);
        Matrix(int x);
        Matrix(string filename, string path);

        //pobieranie i ustawianie wartości
        void setValue(int cols, int rows, double val);
        double getValue(int cols, int rows);

        //dodawanie bieżącej macierzy do tej z parametru i zapisywanie do nowej
        Matrix sum(const Matrix &m2);
        Matrix subtract(const Matrix &m2);
        Matrix multiply(const Matrix &m2);
        
        int cols();
        int rows();
        void print();

        void store(string filename, string path);
    private:
        int rows_, cols_;
        double **p;

        void allocSpace();
};