#include<iostream>
using namespace std;

struct Node {
	int n;
	Node* tail = NULL;
};

void input(Node** top2, int n2) {
	Node* a=new Node;
	a->n = n2;
	a->tail = *top2;
	*top2 = a;
	return;
}

int output(Node** top2) {
	int temp = (*top2)->n;
	*top2 = (*top2)->tail;
	return temp;
}

int main() {
	Node* top = NULL;
	input(&top, 1);
	input(&top, 2);
	input(&top, 3);
	cout << output(&top);
	cout << top->tail->n;
	return 0;
}
