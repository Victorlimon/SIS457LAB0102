#include <iostream>
using namespace std;

int main()
{
	int dato;
	do
	{
		system("cls");
		dato = 0;
		cout << "El siguiente programa permite visualizar en pantalla" << endl;
		cout << "la biografia de Victor Manuel Limon Zabala" << endl;
		cout << "\n\n¿Que opcion desea realizar?:" << endl;
		cout << "\n1: Ver biografia" << endl;
		cout << "2: Salir del programa" << endl;
		cout << "\n\nOpcion(1-2): ";
		cin >> dato;
		switch (dato)
		{
		case 1:
			system("cls");
			cout << "\n\nBIOGRAFIA DE VICTOR MANUEL LIMON ZABALA\n" << endl;
			cout << "Nacio el 17 de agosto del 2001 ne la ciudad de Sucre Bolivia,"<<endl;
			cout << "estudio en el Colegio San Xavien A, egreso del colegio el 2019"<<endl;
			cout << "en el 2020 fue admitido a la Universidad San Fransico Xavier de"<<endl;
			cout << "Chuquisaca a la carrera de Ing. en T.I"<<endl;
			cout << "en su tiempo libre practica ciclismo en la disiplina de Downhill y Cross Country\n\n"<<endl;
			system("Pause");
			break;
		case 2:
			break;
		}
	} while (dato!=2);
}