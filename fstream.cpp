//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main(){
//	ofstream outFile("example.txt");
//	
//	outFile << "Nama saya Joe";
//	
//	outFile.close();
//}

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string teks;

	ifstream readFile("example.txt");
	
	while(getline(readFile, teks)){
		cout << teks;
	}
	
	readFile.close();
}
