#include <iostream>
#include <conio.h>

using namespace std;

void Fungsi(int*);
void Kuadrat(int*);
int Kuadrat(int);
void Fungsi(int& B);
void Kuadrat2(int&);
void CetakJudul(char, string, char);

int main()
{
	string J, K, L; char GarisMin = '-';
	J = "CONTOH FUNGSI MENGGUNAKAN POINTER";
	K = "CONTOH FUNGSI MENGGUNAKAN REFERENCE";
	L = "(Tekan 'Enter' Untuk Melihat Contoh Berikutnya (Reference))..";

	//Fokus Mulai Dari Sini..
	/* CONTOH 1: FUNGSI MENGGUNAKAN: POINTER */
	int A = 5;
	CetakJudul(GarisMin, J, GarisMin);

	cout << "Address A   = " << &A << endl;
	cout << "Nilai A     = " << A << endl;

	//(Fungsi (&A); //Fungsi dengan input pointer
	Kuadrat(&A);
	A = Kuadrat(A);
	cout << "Nilai A     = " << A << endl;


	/* CONTOH 2: FUNGSI MENGGUNAKAN: REFERENCE */
	A = 5;
	CetakJudul(GarisMin, K, GarisMin);

	cout << "Address A          = " << &A << endl;
	cout << "Nilai A            = " << A << endl;

	Fungsi(A);
	cout << "Nilai A (Fungsi)   = " << A << endl;

	Kuadrat2(A);
	cout << "Nilai A (Kuadrat)  = " << A << endl;

	_getch();
	return 0;
}
//Fungsi Untuk Pointer
void Fungsi(int* B)
{
	cout << "Address B   = " << B << endl;
	cout << "Nilai B     = " << &B << endl; //deferencing
}

void Kuadrat(int* valPtr)
{
	*valPtr = (*valPtr) * (*valPtr);
}

int Kuadrat(int Value)
{
	return Value * Value;
}

//Fungsi Untuk Reference
void Fungsi(int &B)
{
	B = 10;
	cout << "Address B          = " << &B << endl;
	cout << "Nilai B            = " << B << endl; //deferencing
}

void Kuadrat2(int &nilaiRef)
{
	nilaiRef = nilaiRef * nilaiRef;
}

//Abaikan Fungsi Ini, Hanya Pelengkap
void CetakJudul(char C, string S, char H)
{
	for (int i = 0; i <= 100; i++)
	{
		cout << C;
	}

	cout << endl << S << endl;

		for (int i = 0; i <= 100; i++)
		{
			cout << H;
		}

		cout << endl;
}
