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

	if(pilihan=="Mangga"){
		cout << "Keterangan Buah Mangga"<<endl;
		cout << "Nama Buah        : "<<buahMangga.nama<<endl;
		cout << "Warna dalam Buah : "<<buahMangga.warna<<endl;
		cout << "Rasa Buah        : "<<buahMangga.rasa<<endl;
		cout << "Bentuk Buah      : "<<buahMangga.bentuk<<endl;
		cout << "Kulit Buah       : "<<buahMangga.kulit<<endl;
		
	buahMangga.kupas("Kupas terlebih dahulu kulitnya, lalu makan");
	
	}
	else if(pilihan=="Kelapa"){
		cout << "Keterangan Buah Kelapa"<<endl;
		cout << "Nama Buah        : "<<buahKelapa.nama<<endl;
		cout << "Warna dalam Buah : "<<buahKelapa.warna<<endl;
		cout << "Rasa Buah        : "<<buahKelapa.rasa<<endl;
		cout << "Bentuk Buah      : "<<buahKelapa.bentuk<<endl;
		cout << "Kulit Buah       : "<<buahKelapa.kulit<<endl;
		
	buahKelapa.potong("Belah dengan Parang agar bisa dimakan");
	
	}
	else if(pilihan=="Naga"){
		cout << "Keterangan Buah Naga"<<endl;
		cout << "Nama Buah        : "<<buahNaga.nama<<endl;
		cout << "Warna dalam Buah : "<<buahNaga.warna<<endl;
		cout << "Rasa Buah        : "<<buahNaga.rasa<<endl;
		cout << "Bentuk Buah      : "<<buahNaga.bentuk<<endl;
		cout << "Kulit Buah       : "<<buahNaga.kulit<<endl;
		
	buahNaga.kupas("Kupas terlebih dahulu kulitnya, lalu makan");
	
	}
	else if(pilihan=="Pepaya"){
		cout << "Keterangan Buah Pepaya"<<endl;
		cout << "Nama Buah        : "<<buahPepaya.nama<<endl;
		cout << "Warna dalam Buah : "<<buahPepaya.warna<<endl;
		cout << "Rasa Buah        : "<<buahPepaya.rasa<<endl;
		cout << "Bentuk Buah      : "<<buahPepaya.bentuk<<endl;
		cout << "Kulit Buah       : "<<buahPepaya.kulit<<endl;
	
	buahPepaya.kupas("Kupas terlebih dahulu kulitnya, lalu makan");
	
	}
	else {
		cout << "Huruf tidak KAPITAL atau salah memasukkan kata kunci";
	}
}

