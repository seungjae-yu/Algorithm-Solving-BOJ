#include <iostream>
#include <vector>
using namespace std;

int n, rmv, root, inp, cnt;

typedef struct node {
	int par;
	vector<int> child;
};

node tree[55];

void inorder(int nod) {

	if (nod == rmv) return;
	
	if (tree[nod].child.size() == 0) {
		cnt++;
		return;
	}

	if (tree[nod].child.size() == 1 && tree[nod].child[0] == rmv) {
		cnt++;
		return;
	}

	for (int i = 0; i < tree[nod].child.size(); i++) {
		if (tree[nod].child[i] == nod) return;
		inorder(tree[nod].child[i]);
	}
}

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &inp);
		if (inp == -1) {
			root = i;
			continue;
		}
		tree[inp].child.push_back(i);
		tree[i].par = inp;
	}
	scanf("%d", &rmv);

	if (root == rmv) {
		if (tree[root].child.size() == 1) inorder(tree[root].child[0]);
	}
	else inorder(root);
	printf("%d\n", cnt);
}