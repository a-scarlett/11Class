#include <iostream>
#include <vector>
using namespace std;
#define maxn 10
void dfs (int v, bool (&used)[10], vector <int> (&g)[10],vector<int> *comp) {
	used[v] = true;
	comp->push_back (v);
	for (size_t i=0; i<g[v].size(); ++i) {
		int to = g[v][i];
		if (! used[to])
			dfs (to,(&used)[0],(&g)[0],
         &comp[0]);}}

int main()
{
    int n, p;
    cin>>n;
    vector <int> g[maxn];
    for (int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    cin>> p;
    if (p==1){g[i].push_back(j);}
    }}
for (int i=0; i<n; i++){
    for (vector<int>::iterator it = g[i].begin() ; it!=g[i].end() ; ++it){
        cout<<*it<< ", ";}
        cout<<endl;
    }
int x, y;
cin>> x;
cin>>y;
bool used[maxn];
vector<int> comp(maxn+1);
int s=0;
bool a=0, b=0, c=0;
	for (int i=0; i<n; ++i)
		used[i] = false;
	for (int i=0; i<n; ++i){
		if (! used[i]) {s++;
			comp.clear();
			dfs (i, (&used)[0], (&g)[0], &comp);

			cout << "Component:";
			for (size_t j=0; j<comp.size(); ++j){
				cout << ' ' << comp[j];
			if (comp[j]==x-1) a=1;
			if (comp[j]==y-1) b=1;
			if (a&b) {cout<< "  ("<< x<<" and "<< y<<" are connectected)"<< endl; c=1;};
			}a=0;
			b=0;}}
			if (c==0){cout<< "  ("<< x<<" and "<< y<<" are not connectected) ";}
			if (s==1) cout<<"A graph is connected";
};
