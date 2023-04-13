//#include <iostream>
//using namespace std;
//
//class Mahasiswa{
//	public:
//		string nama, npm;
//};
//
//int main(){
//	Mahasiswa Mhs;
//	
//	cin >> Mhs.nama;
//	cin >> Mhs.npm;
//	
//	cout << Mhs.nama << " " << Mhs.npm;
//}
//
//#include <iostream> 
//using namespace std; 
//
//class Mahasiswa{ 
//	public: 
//		Mahasiswa(){ // CONSTRUCTOR 
//			cout << "Hello World";
//	}
//};
//			
//			
//int main(){
//	Mahasiswa Mhs;
//}
//
//#include <iostream>
//using namespace std;
// 
//class Mahasiswa{ 
//	public: 
//		string nama, npm; 
//		
//		Mahasiswa (string nama, string b){ 
//			this->nama = nama; 
//			npm = b; 
//			} 
//}; 
//		
//int main(){ 
//	Mahasiswa Mhs ("Reza", "2117"); 
//	cout << "Nama: " << Mhs.nama << endl;
//	cout << "Npm: " << Mhs.npm; 
//}


#include <iostream>
using namespace std; 

class PersegiPanjang{ 
	private: 
		int panjang; 
		int lebar; 
		
	public:
		Persegi Panjang(int panjang, int Lebar){
			this->panjang = panjang;
			this->lebar = lebar; 
		}
	 
		void setPanjang(int panjang){ 
			this->panjang = panjang; 
		}
		
		void setLebar (int lebar){ 
			this->lebar = lebar;
		} 
		
		int getPanjang(){ 
			return panjang; 
		} 
		
		int getLebar(){ 
			return lebar; 
		} 
		
		int Luas(){ 
			return panjang * lebar; 
		} 
}; 

int main(){ 
	PersegiPanjang psg; 
	
	psg.setLebar(10); 
	psg.setPanjang (10); 
	cout << "Panjang: "<< psg.getPanjang () << endl; 
	cout << "Lebar: " << psg.getLebar() << endl; 
	cout << "Luas: " << psg.Luas(); 
	
}
