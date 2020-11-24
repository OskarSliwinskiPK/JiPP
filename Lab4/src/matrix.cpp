#include <matrix.h>
#include <stdexcept>
#include <fstream>
#include <string>

using namespace std;


//Public functions
Matrix::Matrix(int cols, int rows) : cols_(cols), rows_(rows)
{   
    if (rows_ <= 0 || cols_ <= 0)
    {
        throw out_of_range("Rozmiar macierzy powinien byc wiekszy niz 0  - Matrix::getValue");
    }
    allocSpace();
    for (int i = 0; i < cols_; ++i) {
        for (int j = 0; j < rows_; ++j) {
            p[i][j] = 0;
        }
    }
}

Matrix::Matrix(int x) : rows_(x), cols_(x)
{   
    if (rows_ <= 0 || cols_ <= 0)
    {
        throw out_of_range("Rozmiar macierzy powinien byc wiekszy niz 0  - Matrix::getValue");
    }
    allocSpace();
    for (int i = 0; i < cols_; ++i) {
        for (int j = 0; j < rows_; ++j) {
            p[i][j] = 0;
        }
    }
}

double Matrix::getValue(int cols, int rows)
{
    if (rows < 0  || rows >= rows_ || cols < 0 || cols >= cols_) {
        throw out_of_range("Poza zakresem - Matrix::getValue");
    }
    return p[cols][rows];
}

void Matrix::setValue(int cols, int rows, double val)
{
    if (rows < 0 || rows >= rows_ || cols < 0 || cols >= cols_) {
        throw out_of_range("Poza zakresem - Matrix::setValueAt");
    }
    p[cols][rows] = val;
}

Matrix Matrix::sum(const Matrix &m2)
{
    if (rows_ != m2.rows_ || cols_ != m2.cols_) {
        throw invalid_argument("Nie mozna dodac tych macierzy - Matrix::sum");
    }

    Matrix m_sum(cols_, rows_);
    for (int i = 0; i < cols_; ++i) {
        for (int j = 0; j < rows_; ++j) {
            m_sum.p[i][j] = p[i][j] + m2.p[i][j];
        }
    }
    return m_sum;
}

Matrix Matrix::subtract(const Matrix &m2)
{
    if (rows_ != m2.rows_ || cols_ != m2.cols_) {
        throw invalid_argument("Nie mozna odjac tych macierzy - Matrix::subtract");
    }

    Matrix m_sub(cols_, rows_);
    for (int i = 0; i < cols_; ++i) {
        for (int j = 0; j < rows_; ++j) {
            m_sub.p[i][j] = p[i][j] - m2.p[i][j];
        }
    }
    return m_sub;
}

Matrix Matrix::multiply(const Matrix &m2)
{
    if (rows_ != m2.cols_)
    {
        throw invalid_argument("Nie mozna pomnozyc tych macierzy - Matrix::multiply");
    }

    Matrix m_multiply(cols_, m2.rows_);
    for (int i = 0; i < cols_; i ++){
        for (int j = 0; j< m2.rows_; j++){
            double sum = 0;
            for (int k = 0; k < m2.cols_; k++)
                sum += p[i][k] * m2.p[k][j];
            m_multiply.p[i][j] = sum;
        }
    }
    return m_multiply;
}

int Matrix::rows() 
{
    return rows_;
}

int Matrix::cols()
{
    return cols_;
}

void Matrix::print()
{
    cout << endl;
    for (int i = 0; i < cols_; i++){
        for (int j = 0; j < rows_; j++)
            cout << p[i][j] << " ";
    cout << endl;
    }
}

void Matrix::store(string filename, string path)
{
    string fullpath = path + '/' + filename;
    ofstream file(fullpath);

    if (file.is_open())
    {
        file << cols_ << " " << rows_ << endl;
        for (int i = 0; i < cols_; i++){
            for (int j = 0; j < rows_; j++)
                file << p[i][j] << " ";
        
        file << endl;
        }
        file.close();
    }
    else {
        throw runtime_error("Nie mozna utworzyc pliku: " + fullpath);
    }
}

Matrix::Matrix(string filename, string path)
{
    string fullpath = path + '/' + filename;
    ifstream file(fullpath);
    if (file.is_open())
    {
        file >> cols_;
        file >> rows_;

        if (rows_ <= 0 || cols_ <= 0)
        {
        throw out_of_range("Rozmiar macierzy powinien byc wiekszy niz 0  - Matrix::getValue");
        }

        allocSpace();
        for (int i = 0; i < cols_; ++i) {
            for (int j = 0; j < rows_; ++j) {
                file >> p[i][j];
            }
        }
    file.close();
    }
    else{
        throw runtime_error("Nie mozna otworzyc pliku: " + fullpath);
    }
}

// Private functions
void Matrix::allocSpace()
{
    p = new double*[cols_];
    for (int i = 0; i < cols_; ++i) {
        p[i] = new double[rows_];
    }
}