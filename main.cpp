#include <iostream>
#include <fstream>
#include <string>
/* 	fstream ini memiliki 3 bagian, yaitu :
	1. ofstream = membuat file dan menuliskan data ke file 
	2. ifstream = berfungsi untuk membaca data dari file
	3. fstream = adalah kombinasi dari kedua kelas diatas
*/
using namespace std;

int main(){
	
	
	ofstream noteFile;
	string catFile;
	
	//	ios::out = default;
	//	ios::app = menambahkan text pada akhir baris;
	//	ios::trunc = membuatkan file jika tidak ada file;   
	
	// membuat file .txt
	noteFile.open("test.txt");
	// memasukkan sebuah text ke file yg sudah dibuat diatas
	noteFile << "nasi padang mantap mazze!";
	// Menutup File
	noteFile.close();
	
	//	1. ios::out
	noteFile.open("test2.txt");
	noteFile << "nasi padang mantap mazze!", ios::out;
	noteFile.close();
	
	//	2. ios::app
	noteFile.open("test3.txt");
	noteFile << "nasi padang mantap mazze!", ios::app;
	noteFile.close();
	
	//	3. ios::trunc
	noteFile.open("test4.txt");
	noteFile << "nasi goreng + ayam goreng = joss!", ios::trunc;
	noteFile.close();
	
	return 0;
}
