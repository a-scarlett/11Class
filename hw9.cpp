#include <iostream>
#include <vector>
#define INF 100
using namespace std;

int main()
{int n;
cin>> n;
vector < vector<int> > g(n, vector <int> (n));
for (int i=0; i<n; i++){
for (int j=i; j<n; j++){
if (i==j){g[i][j]=INF; j++;}
cout << i+1<<" - "<< j+1<<" : "<< endl;
if(j<n){
cin >>g[i][j];
if (g[i][j]==0){
g[i][j]=INF;}
g[j][i]=g[i][j];}}}
for (int i=0; i<n; i++){for (int j=0; j<n;j++){
    cout << i+1 << " - "<< j+1<< " : ";
 cout << g[i][j];
    cout << endl;}}
vector<bool> used (n);
vector<int> min_e (n, INF), sel_e (n, -1);
min_e[0] = 0;
for (int i=0; i<n; ++i) {
	int v = -1;
	for (int j=0; j<n; ++j)
		if (!used[j] && (v == -1 || min_e[j] < min_e[v]))
			v = j;
	if (min_e[v] == INF) {
		cout << "No MST!";
		break;
	}
	used[v] = true;
	if (sel_e[v] != -1)
		cout << v+1 << " : " << sel_e[v]+1 << endl;

	for (int to=0; to<n; ++to)
		if (g[v][to] < min_e[to]) {
			min_e[to] = g[v][to];
			sel_e[to] = v;}}}
