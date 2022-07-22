//METODO BURBUJA : EL MAS FACIL
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
	system("color 70");
	
	int numbers[] = {4,1,2,3,5};
	int i,j,aux;
	
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5 ;j++)
		{
			if ( numbers[j] > numbers[j+1])
			{
				aux = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = aux;
			}
		}
	}
	cout << " ordenamiento: \n";
	for(i = 0; i < 5; i++ )
	{
		cout << numbers[i] << " ";
		
	}
	
	getch();
	return 0;
}
