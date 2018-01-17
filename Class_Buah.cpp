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
	
}
