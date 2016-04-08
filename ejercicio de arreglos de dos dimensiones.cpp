// ejercicio de erreglos de dos dimensiones. 
# include <iostream>
# include <iomanip>
using namespace std;
int main ()
{
cout <<"***Arreglos de Dos Dimensiones***\n";	
int const filas=4;
int const columnas=4;
int  i, j;
int arreglo[filas][columnas]= { {5, 7, 2, 8}, {3, 1, 0, 6}, {10, 20, 15, 9}, {4, 31, 24, 32} };
for (i=0; i<4; i++)
{cout  << endl;
for (j=0; j<4; j++)	
{		
cout<< setw (4)  << arreglo [i][j];
}
}
system ("\:npause\n");
return 0;
}
