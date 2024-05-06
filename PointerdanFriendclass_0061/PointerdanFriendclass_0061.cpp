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
	mahasiswa *mhs = new mahasiswa(1); //pointer  object mhs
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
	void setid(int pId);
	void displayAll(orang& a);
};


class siswa
{
public: 
	void setId(int pId);
	void displayAll(orang& a);
};
void siswa::displayAll(orang& a)
{
	cout << "id" << endl << a.nama;
}
void orang::setNama(string pNama)
{
	nama = pNama;
}
void siswa::setId(int pId)
{
	id = pId;
}
int main()
{
	orang joko;
	joko.setNama("Joko Susilo");
	siswa joko_siswa;
	joko_siswa.setId(1);
	joko_siswa.displayAll(joko);
	return 0;
}

class mahasiswa
{
private:
	string nama;

public:
	friend void setNama(mahasiswa& a, string);
};

void setNama(mahasiswa& a, string pNama)
{
	a.nama = pNama;
}

int main()
{
	mahasiswa joko;
	setNama(joko, "Kairi Kumar");
	return 0;
} 
