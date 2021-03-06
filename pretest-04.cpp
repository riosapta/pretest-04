/*Pretest-04
Nama: Rio Sapta Samudera
NPM : 140810180030
Desc: Singly Linked List
*/

#include "pch.h"
#include <iostream>
using namespace std;

struct ElemtList {
	char npm[14];
	char nama[40];
	float ipk;
	ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer list;

void createList(list& first) {
	first = NULL;
}

void createElement(pointer& pBaru) {
	pBaru = new ElemtList;
	cout << "NPM\t:"; cin >> pBaru->npm;
	cout << "Nama\t:"; cin >> pBaru->nama;
	cout << "IPK\t:"; cin >> pBaru->ipk;
	pBaru->next = NULL;
}

void insertSortIPK(list& first, pointer pBaru) {
	if (first == NULL) first = pBaru;
	else
	{
		pBaru->next = first;
		first = pBaru;
	}
}

void transversal(list first) {
	pointer pBantu;
	int i=0;
	if (first == NULL) cout << "List Kosong.";
	else
	{
		pBantu = first;
		cout << "\t\t\tData Mahasiswa\n";
		cout << "=================================================\n";
		cout << "No  NPM          Nama                IPK\n";
		cout << "-------------------------------------------------\n";
		do
		{
			i++;
			cout << i << "     " << pBantu->npm << "\t\t" << pBantu->nama << "\t\t" << pBantu->ipk << endl;
			pBantu = pBantu->next;
		} while (pBantu != NULL);
		cout << "\n=================================================\n";
	}
	cout << endl;
}

int main(){
	int n;
	list x;
	pointer p;
	createList(x);
	cout << "Masukkan banyak data: "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nData Mahasiswa ke-" << i + 1 << endl;
		createElement(p);
		insertSortIPK(x, p);
	}
	
	transversal(x);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
