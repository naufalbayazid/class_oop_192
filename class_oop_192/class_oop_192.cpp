#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\bNama= " << nama;
	}

};
class matakuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK() {
		cout << "\n\nMasukkan kode matakuliah : ";
		cin >> kode;
		cout << "masukkan matakuliah = ";
		cin >> namaMK;
		cout << "jumlah SKS = ";
		cin >> sks;
	}

	void tampilMK() {
		cout << "\nMasukkan jumlah SKS= ";
		cin >> sks;
		cout << "masukkan kode MK= ";
		cin >> kode;
		cout << "\nMasukkan Nama MK= ";
		cin >> namaMK;
	}

};

int main()
{
	Mahasiswa mhs1;
	matakuliah mk;

	cout << "masukkan nim = ";
	cin >> mhs1.nim;
	cout "masukkan nama = ";
	cin >> mhs1.nama;

	mk.inputMK();
	mhs1.tampil();
	mk.tampilMK();
}
