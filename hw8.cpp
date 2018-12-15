#include <iostream>
#include <vector>
using namespace std;
#define MAXN 100

class graph {
public:
vector <int> g[MAXN];
bool used[MAXN];
int tin[MAXN];
int fup[MAXN];
int timer;
void make_graph(int n){for (int i=0; i<n; i++){int p;
    for (int j=0;j<n; j++){
        cin>>p;
    if (p==1 && j!=i){g[i].push_back(j);}}}
for (int i=0; i<n; i++){
    for (vector <int> ::iterator it =g[i].begin();it !=g[i].end();it++){
        cout<< i+1<<" : "<< *it+1<< endl;}
    }};
void dfs (int v, int p = -1) {
	used[v] = true;
	tin[v] = fup[v] = timer++;
	int children = 0;
	for (size_t i=0; i<g[v].size(); ++i) {
		int to = g[v][i];
		if (to == p)  continue;
		if (used[to])
			fup[v] = min (fup[v], tin[to]);
		else {
			dfs (to, v);
			fup[v] = min (fup[v], fup[to]);
			if (fup[to] >= tin[v] && p != -1)
				cout<< v+1<< endl;
			++children;
		}
	}
	if (p == -1 && children > 1)
		cout<< v+1<< endl;
}
void find_cut_vertex(int n) {
	timer = 0;
	for (int i=0; i<n; ++i)
		used[i] = false;
	dfs (0);

};
};
int main()
{int n;
cin>> n;
graph A;
A.make_graph(n);
A.find_cut_vertex(n);
}
