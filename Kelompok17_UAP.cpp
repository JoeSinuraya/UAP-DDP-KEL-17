#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <curses.h>
#include <ctime>

#define WRONGTRIES 5

using namespace std;
	
	void DrawMan(int tries){
	cout << endl << endl;
	cout << "  -----" << endl;
	cout << "  |   |" << endl;
	cout << "  |"; if (tries < 5) cout  << "   O    "; cout << endl;
	cout << "  |"; if (tries <= 3) cout << "  /|\\   "; cout << endl;
	cout << "  |"; if (tries <= 1) cout << "  / \\    "; cout << endl;
	cout << "  |" << endl;
	cout << "__|__" << endl;
}

int main(){
//animasi loading
	initscr();

	mvprintw(1,2, "HANGMAN");
	mvprintw(3,2, "=========================================================");
	mvprintw(4,2,"Loading");
	mvprintw(5,2, "=========================================================");
	refresh();
	Sleep(1000);
	mvprintw(4,9,".");
	refresh();
	Sleep (1000);
	mvprintw(4,10,".");
	refresh();
	Sleep(1000);
	mvprintw(4,11,".");
	refresh();
	Sleep (1000);
	mvprintw(4,12,".");
	refresh();
	Sleep (1000);
	endwin();

//fungsi buat ngerandom nama buah
	srand (time(NULL));
	string wordList[5] = {"durian", "jeruk", "pisang", "alpukat", "sirsak"};
	string word;
	string guessed;

	word = wordList[rand()%5];
	
	int wordLength = word.length();
	string dispWord (wordLength, '_');
	int found = 0;
	char guess = ' ';
	int tries = 5; // No of wrong tries
	int flagFound = 0;
	
	
	while(tries>=0){
		system("cls");
		cout <<"Tebak Nama Buah : "<<endl<<endl;
		
		for(int i=0; i<wordLength; i++)
			cout<<" "<<dispWord[i]<<" ";
		cout<<endl<<endl<<endl;
		
		cout<<"Sisa Percobaan : "<<tries<<" / "<<WRONGTRIES<<endl;
		cout<<"Huruf yang ditebak : "<<guessed<<endl;
		
		DrawMan(tries);
		
		if( found == wordLength ){
			cout<<endl;
			cout<<"*****************"<<endl;
			cout<<"*    Kelazzz    *"<<endl;
			cout<<"*****************"<<endl;
			break;
		}
		
	if ( tries == 0) break;
	
	cout<<"Pilih huruf : ";
	guess = getche();
	
	guessed = guessed + " " + guess;
	
	if( dispWord.find(guess)!=string::npos ) tries++;
	flagFound = 0;
	for(int i=0; i<wordLength; i++){
		if( word[i]==guess && dispWord[i]=='_' ){
			dispWord[i] = guess;
			found++;
			flagFound = 1;
		}
	}
	
		if ( !flagFound )
			tries--;
	}
	if( found != wordLength){
		cout<<endl;
		cout<<"*****************"<<endl;
		cout<<"*    You Lose   *"<<endl;
		cout<<"*****************"<<endl;

	}
	getch();
	return 0;
}
