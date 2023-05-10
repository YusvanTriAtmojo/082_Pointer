#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};

 
void mahasiswa::showNim() {   //Implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };   //object mhs
	mhs.showNim();        //Member Access Operator

	mahasiswa& ref = mhs;  //Pointer References refMhs
	ref.nim = 2;          //Member access operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;  //Pointer dereference pMhs
	pMhs->nim = 3;         //arrow operator
	pMhs->showNim();
	system("pause");
	return 0;
}