#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

typedef long long ll;
#define INF 1987654321

typedef struct pos {
	ll x, y;
};

int N, cnt;
ll ix, iy;
pos st;
vector<pos> p;

double dist(pos p1, pos p2) {
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}

ll ccw(pos p1, pos p2, pos p3) {
	return (p2.x - p1.x)*(p3.y - p1.y) - (p2.y - p1.y)*(p3.x - p1.x);
}

bool cmp1(pos p1, pos p2) {
	return p1.x < p2.x || (p1.x == p2.x) && (p1.y < p2.y);
}

bool cmp2(pos p1, pos p2) {
	ll c = ccw(p[0], p1, p2);
	if (c > 0) return 1;
	if (c < 0) return 0;
	else {
		if (dist(p[0], p1) < dist(p[0], p2)) return 1;
		else return 0;
	}
}

bool isInside(vector<pos> &ch) {
	int cross = 0;
	for (int i = 0; i < ch.size(); i++) {
		int j = (i + 1) % ch.size();
		if ((ch[i].y > st.y) != (ch[j].y > st.y)) {
			double chk = (ch[j].x - ch[i].x) * (st.y - ch[i].y) / (ch[j].y - ch[i].y) + ch[i].x;
			if (st.x < chk) cross++;
		}
	}
	return cross % 2 > 0;
}


void func() {
	
	sort(p.begin(), p.end(), cmp1);		
	sort(p.begin() + 1, p.end(), cmp2);

	vector<pos> v;
	v.push_back(p[0]);
	v.push_back(p[1]);

	for (int i = 2; i < p.size(); i++) {
		while (v.size() >= 2 && ccw(v[v.size() - 2], v.back(), p[i]) <= 0) {
			v.pop_back();
		}
		v.push_back(p[i]);
	}

	if (isInside(v)) cnt++;

	for (int i = 0; i < p.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			if (p[i].x == v[j].x && p[i].y == v[j].y) p.erase(p.begin() + i);
		}
	}
}

int main() {
	scanf("%d %lld %lld", &N, &st.x, &st.y);
	for (int i = 0; i < N; i++) scanf("%lld %lld", &ix, &iy), p.push_back({ ix,iy });
	while (true) {
		if (p.size()<=1) break;
		func();		
	}
	printf("%d\n", cnt);
}