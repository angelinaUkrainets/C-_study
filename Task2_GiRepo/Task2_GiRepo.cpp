#include <iostream>
using namespace std;

class Node {
private:
	int value;
	Node* next;
	Node* prev;

public:
	Node(int value) {
		this->value = value;
		this->next = nullptr;
		this->prev = nullptr;
	}
};


int main() {
}