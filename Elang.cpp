#include <iostream>
#include <string>
using namespace std;

class elang{
	public:
		void warna(string warna);
		double beratdewasa;
		string ukuran;
		string nama;	
};


int main(){
	elang ElangHutan,ElangAlaska,ElangSteppe;
	
	ElangHutan.nama = "Elang Hutan";
	ElangHutan.ukuran = "SEDANG";
	ElangHutan.beratdewasa = 40.5;
	ElangAlaska.nama = "Elang Alaska";
	ElangAlaska.ukuran = "BESAR";
	ElangAlaska.beratdewasa = 65.1;
	ElangSteppe.nama = "Elang Steppe";
	ElangSteppe.ukuran = "Besar";
	ElangSteppe.beratdewasa = 61.7;

	cout << (ElangHutan.nama) << " memiliki ukuran tubuh yang " << (ElangHutan.ukuran) << " dengan berat " << (ElangHutan.beratdewasa) << " kg" <<endl;
	cout << (ElangAlaska.nama) << " memiliki ukuran tubuh yang " << (ElangAlaska.ukuran) << " dengan berat " << (ElangAlaska.beratdewasa) << " kg" <<endl;
	cout << (ElangSteppe.nama) << " memiliki ukuran tubuh yang " << (ElangSteppe.ukuran) << " dengan berat " << (ElangSteppe.beratdewasa) << " kg" <<endl;
	
	ElangHutan.warna("Hitam");
	
}

void elang::warna(string warna){
	cout  << endl << "Warna Bulu Elang Hutan adalah " << warna << endl;
}
