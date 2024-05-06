#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
}; 

int main()
{

	mahasiswa mhs(1); // Object mhs
	mhs.showNim(); //Member Access operator

	mahasiswa& refMhs = mhs; // Pointer Reference refMhs
	refMhs.nim = 2;  // Member access operator

	Mahasiswa* pMhs = &mhs; //pointer deference pMhs
	pMhs->nim = 3; // Arrow Operator
	pMhs->showNim();
	return 0;
}

class mahasiswa
{
public:
	int nim;
	void showNim()
	{
		cout << "No Induk = " << nim << endl;
	}
};

int main()
{
	mahasiswa* mhs = new mahasiswa(1); //pointer  object mhs
}