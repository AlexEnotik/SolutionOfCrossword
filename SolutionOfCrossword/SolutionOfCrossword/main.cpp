#include <windows.h>
#include <iostream>
#include <string>
#include <conio.h>
#include "Dictionary.h"
#include <vector>
#include <time.h>
#include "Crossword.h"
#include "Dictionary.h"
using namespace std;

void main() {
	/*return ;
	char crossword[][4] = { 'с', 'о', 'б', 'о',
							'м', 'а', 'р', 'с',
							'а', 'м', 'л', 'е',
							'к', 'л', 'о', 'п' };
	char* dictionary[][4] = { "собр", "мама", "клоп", "осёл" };*/
	setlocale(LC_ALL, "Russian");
	//struct Result {
	//	int x;
	//	int y;
	//	char value;
	//}typedef result;
	std::vector<std::vector<char>> crossword = {{ 'с', 'о', 'б', 'о' },
												{ 'м', 'а', 'р', 'с' },
												{ 'а', 'м', 'л', 'е' },
												{ 'к', 'л', 'о', 'п' }};
	std::vector<std::string> dictionary = { "собр", "мама", "клоп", "осёл" };
	//system("cls");
	//for (int j = 0; j < 4; j++) {
	//	std::cout << "    ";
	//	for (int i = 0; i < 4; i++) {
	//		 if (i > -1 && i < 4 && j > -1 && j < 4) {
	//			 std::cout <<crossword[j][i];
	//		}
	//		std::cout << " ";
	//	}
	//	std::cout << std::endl;
	//}

	//for (int i = 0; i < dictionary.size(); i++) {
	//	/*cout << dictionary[i] << endl;*/
	//	for (int j = 0; j < dictionary[i].size(); j++) {
	//		/*cout << dictionary[i][j] << endl;*/
	//		for (int l = 0; l < crossword.size(); l++) {
	//			for (int m = 0; m < crossword[l].size(); m++) {
	//				if (crossword[l][m] == dictionary[i][j]) {
	//					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	//					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_GREEN );
	//					cout << crossword[l][m] << endl;
	//				}
	//			}
	//		}
	//	}
	//}
	Crossword cross("2.txt");
	Dictionary dic("1.txt");
	cross.SolveCrossword(&dic);
}