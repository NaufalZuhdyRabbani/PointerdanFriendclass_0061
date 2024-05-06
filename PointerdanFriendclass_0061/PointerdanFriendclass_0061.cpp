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

	mahasiswa* pMhs = &mhs; //pointer deference pMhs
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
	mhs->nim = 2;
	mhs->showNim();
	delete mhs;
	return 0;
}

class siswa;
class orang
{
private:
	string nama;

public:
	void setNama(string pNama);
	friend class siswa;
};

class siswa
{
private:
	int id;
public:
	void setid(int pid);
	void displayAll(orang &a):
};