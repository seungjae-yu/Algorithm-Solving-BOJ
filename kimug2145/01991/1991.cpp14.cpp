#include <iostream>
#include <string>
using namespace std;

int N;
char a, b, c;

struct node {
	node* left;
	node* right;
	int v;
};

node * n[27];
void pre(node * now);
void inorder(node * now);
void post(node * now);

string ANS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main() {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		n[i] = new node;
		n[i]->left = n[i]->right = NULL;
		n[i]->v = i;
	}
	
	while (N--) {

		cin >> a >> b >> c;
		if (b != '.') {
			n[a - 65]->left = n[b - 65];
		}

		if (c != '.') {
			n[a - 65]->right = n[c - 65];
		}
	}

	pre(n[0]);
	cout << "\n";
	inorder(n[0]);
	cout << "\n";
	post(n[0]);
}

void pre(node * now) {
	if (now == NULL) return;
	cout << ANS[now->v];

	pre(now->left);
	pre(now->right);
}

void inorder(node * now) {
	if (now == NULL) return;	

	inorder(now->left);
	cout << ANS[now->v];
	inorder(now->right);
}

void post(node * now) {
	if (now == NULL) return;

	post(now->left);
	post(now->right);
	cout << ANS[now->v];
}