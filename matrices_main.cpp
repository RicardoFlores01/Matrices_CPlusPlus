#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int matriz[100][100], filas, columnas;

	cout << "Ingresa el numero de las filas ";
	cin>> filas;
	cout <<" Ingresa el numero de columnas ";
	cin>>columnas;
	
	// guardando los valores en la matriz	
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			cout<<"Rellena la matriz en la posicion ";
			cout<<"[ " << i << "][" << j << "]: ";
			cin>>matriz[i][j];
		}
	}
	// mostrando la matriz 
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			cout << matriz[i][j];
		}
		cout<<" \n";
	}
	return 0; 
}
/*
1 | 2 | 3 
4 | 5 | 6 
*/
