#include <iostream>
using namespace std;

struct Node {
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

Node* START = NULL;

void addNode() {
	Node* newNode = new Node();
	cout << "\nMasukkan NIM mahasiswa: ";
	cin >> newNode->noMhs;
	cout << "\nMasukkan nama mahasiswa: ";
	cin >> newNode->name;

	if (START == NULL || newNode->noMhs <= START->noMhs) {

	}
}