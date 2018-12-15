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
	for (size_t i=0; i<g[v].size(); ++i) {
		int to = g[v][i];
		if (to == p)  continue;
		if (used[to])
			fup[v] = min (fup[v], tin[to]);
		else {
			dfs (to, v);
			fup[v] = min (fup[v], fup[to]);
			if (fup[to] > tin[v])
				cout << v+1<<" - "<< to+1<<endl;}}}
void find_bridges(int n) {
	timer = 0;
	for (int i=0; i<n; ++i)
		used[i] = false;
	for (int i=0; i<n; ++i)
		if (!used[i])
			dfs (i);

};
};
int main()
{int n;
cin>> n;
graph A;
A.make_graph(n);
A.find_bridges(n);
}
