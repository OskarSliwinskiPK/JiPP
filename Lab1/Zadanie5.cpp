#include<iostream>
using namespace std;

void get_matrix(double tab[2][3])
{
    for(int i=0;i<2;i++){
		for(int j=0;j<3;j++)
			cin>>tab[i][j];}
}

int main()
{
	double A[2][3];
    double B[2][3];
    double C[2][3];
    cout << "Podaj macierz A (6 cyfr): \n";
    get_matrix(A);
    cout << "Podaj macierz B (6 cyfr): \n";
	get_matrix(B);

    for(int i=0; i<2; i++)
        for(int j=0;j<3;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }

    cout << "Macierz wynikowa: \n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
			cout<<C[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
