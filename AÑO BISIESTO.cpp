#include <iostream>

using namespace std;

class Fecha
{ 
private:
	int dia;
	int mes;
	int year;
public:
	void setDia();
	void setMes();
	bool setBisiesto ();
	void setFechita();
};

int main (){
	system("color B8");
}

void Fecha::setFechita()
{
	cout << "Ingrese el año : " << endl;
	cin >> year;
	cout << "Ingrese el mes : " << endl;
	cin >> mes;
	cout << "Ingrese el dia : " << endl;
	cin >> dia;
	cout << "Fecha: " << year << "/" << mes << "/" << dia << endl;
	{
		Fecha f;
		cout<<"El año es: ";
		f.setBisiesto();
		cout<<"El mes es: ";
		f.setMes();
		cout<<"El dia es: ";
		f.setDia();
	}
}

void Fecha::setDia()
{
	if (mes == 1 || mes == 3 || mes == 5 || mes ==7 || mes ==8 || mes == 10 || mes == 12)
	{
		if (dia=>1 || dia<=31)
		{ 
		cout<<"Dia valido";
		}
	}
	else if (bisiesto == true)
	{
		if(mes==2 && dia=29)
		cout<<"Dia valido";
		else(mes==2 && dia=>30)
		{
			cout<<"Dia invalido";
		}		
	}
}	

void Fecha::setMes()
{
	if (mes=>1 && mes<=12)
	{ 
		cout<<"Mes valido";
	}
	else  (mes>12)
	{
		cout<<"Mes invalido";
	}
}

bool Fecha::setBisiesto()
{
	if(year%4 !=0)
	{
		return false;
	}
	else if(year%100 !=0)
	{
		return true;
	}
	else if(year%400 !0)
	{
		return false;
	}
	else 
	{
		return true;
	}
}
