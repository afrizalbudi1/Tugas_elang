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
}
