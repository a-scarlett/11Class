#include <iostream>
#include <vector>
//Алгоритм Форда-Беллмана
using namespace std;
struct edge {
	int a, b, cost;
};
int main()
{   setlocale(LC_ALL, "Russian");

    int m;
    cout<< "Количество ребер "<< endl;
    cin >>m;
    int n, v;
    cout<< "Количество вершин "<< endl;
    cin>> n;
    cout<< "Данная вершина "<< endl;
    cin>> v;
vector<edge> e;
const int INF =1000000;
edge s;
bool q;
for(int i=0; i<m; i++){cout<< "Есть еще ребра?"<< endl;
cin>>q;
if (q){
    cout<< "Введите ребро "<< endl;
    cin>> s.a;
    cin>>s.b;
    cout<<"Его вес "<< endl;
    cin>>s.cost;
    e.push_back(s);}
    else break;
}
for (int i=0; i<n; i++){
    s.a=i+1;
    s.b=i+1;
    s.cost=0;
e.push_back(s);
}
	vector<int> d (n, INF);
	d[v-1] = 0;
	for (int i=0; i<n; ++i)
		for (int j=0; j<m; ++j)
			if (d[e[j].a-1] < INF)
				d[e[j].b-1] = min (d[e[j].b-1], d[e[j].a-1] + e[j].cost);
for (int i=0; i<d.size(); i++){
    cout << d[i] << ' ';
}

}
