#include <iostream>
#include <string>
using namespace std;

class buah{
	public:
		string nama;
		string warna;
		string rasa;
		string bentuk;
		string kulit;
		void potong(string belah);
		void kupas(string luar);
	
};

void buah::potong(string belah){
	cout << "Sebaiknya di "<< belah << endl;
}
void buah::kupas(string luar){
	cout << "Sebaiknya di "<< luar << endl;
}
int main(){
	buah buahMangga, buahKelapa, buahNaga, buahPepaya;
	
	buahMangga.nama   = "Mangga";
	buahMangga.warna  = "Hijau";
	buahMangga.rasa   = "Asam";
	buahMangga.bentuk = "Lonjong";
	buahMangga.kulit  = "Lunak";
	
	buahKelapa.nama   = "Kelapa";
	buahKelapa.warna  = "Putih";
	buahKelapa.rasa   = "Hambar";
	buahKelapa.bentuk = "Bulat";
	buahKelapa.kulit  = "Keras";
	
	buahNaga.nama   = "Naga";
	buahNaga.warna  = "Merah";
	buahNaga.rasa   = "Manis";
	buahNaga.bentuk = "Oval";
	buahNaga.kulit  = "Lunak";
	
	buahPepaya.nama   = "Pepaya";
	buahPepaya.warna  = "Orange";
	buahPepaya.rasa   = "Manis";
	buahPepaya.bentuk = "Lonjong";
	buahPepaya.kulit  = "Lunak";
	
string pilihan;
cout << "Cari Buah : "; cin >> pilihan;

}
