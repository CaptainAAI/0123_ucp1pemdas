#include<iostream>
using namespace std;

struct Camaba {
	string noUjian;
	string namaCamaba;
	float mtk;
	float bhi;
	float rata;
	string status;
};
//1. diatas adalah struct dan deklarasinya

int brpkali;
int counter1 = 0, counter2 = 0;  
char pilihan;
//1. diatas adalah deklarasi variabel
void hitung(Camaba mhs)//4.prosedur
{
	
	
	cout << "============== Peserta ==============" << endl;
	cout << "Masukkan nomor ujian: ";
	cin >> mhs.noUjian;
	cout << "Masukkan nama camaba: ";
	cin >> mhs.namaCamaba;
	cout << "Masukkan nilai matematika: ";
	cin >> mhs.mtk;
	cout << "Masukkan nilai bahasa Inggris: ";
	cin >> mhs.bhi;
	mhs.rata = (mhs.mtk + mhs.bhi) / 2;
	//3. diatas adalah implementasi input pada struct
	if (mhs.rata >= 70 && mhs.mtk > 80)
	{
		counter1++;
		mhs.status = "Lulus";
	}
	else
	{
		counter2++;
		mhs.status = "Tidak Lulus";
	}
	//2. diatas adalah conditonal statement
	cout << "Status: " << mhs.status << endl;
}

int main()
{
	do
	{
		
		
		
		cout << "Mau berapa peserta jumlahnya =  ";
		cin >> brpkali;
		for (int loop = 0; loop < brpkali; loop++)
		{
			Camaba mhs;
			hitung(mhs);
		}
		//5. diatas adalah looping mau berapa kali ?
		cout << "                                   " << endl;
		cout << "Jumlah Lulus: " << counter1 << endl;
		cout << "Jumlah Tidak Lulus: " << counter2 << endl;

		cout << "Apakah anda ingin mengulangi (Y/N)? ";
		cin >> pilihan;


		system("cls");
	} while (pilihan == 'Y' || pilihan == 'y');
}//4. diatas adalah implementasi dan prosedur void 
