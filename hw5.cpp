#include <iostream>
#include<vector>
#include <utility>
#include <algorithm>

//Дейкстра для одной вершины доделать.
using namespace std;

int main()
{const int INF = 100;
     setlocale(LC_ALL, "Russian");
cout <<"Количество вершин "<<endl;
int n;
cin>> n;
vector < vector < pair<int,int> > > g (n);
pair<int, int> a;
vector < pair<int,int> > b;
int w[n];
for (int i=0; i<n; i++){w[i]=0;}

for (int i=0; i<n; i++){int k, x;
cout <<"Вершина "<< i+1 <<" связана с  "<< endl;
cin>> k;
while (k!=0){cout <<"Веc ребра равен "<< endl;
cin>> x;
a.first=k-1;
a.second=x;
b.push_back(a);
w[i]++;
cout <<"Вершина "<< i+1 <<" связана с  "<< endl;
cin>>k;}
g[i]=b;
b.clear();}
for (int i=0; i<n; i++){
    for (int j=0;j<w[i]; j++)
{
    cout << i+1 <<" :  ";
    cout<< g[i][j].first+1 <<" (" << g[i][j].second<< ")"<<endl;}
}
int s=0;
vector<int> d (n, INF),  p (n);
	d[s] = 0;
	vector <char> u (n);
	for (int i=0; i<n; ++i) {
		int v = -1;
		for (int j=0; j<n; ++j)
			if (!u[j] && (v == -1 || d[j] < d[v]))
				v = j;
		if (d[v] == INF)
			break;
		u[v] = true;

		for (size_t j=0; j<g[v].size(); ++j) {
			int to = g[v][j].first,
				len = g[v][j].second;
			if (d[v] + len < d[to]) {
				d[to] = d[v] + len;
				p[to] = v;}}}
vector <int> path;
for (int t=0; t<n; t++){
        cout<< t+1<< " - "<< d[t] << endl;

    }
}
