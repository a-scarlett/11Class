#include <iostream>
#include<vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout<< "Количество вершин ";
    int n;
    cin>>n;

    vector < vector <int> > g(n, vector <int> (n) );

    for (int i=0; i<n; i++){int j=0;
        cout<< "Вершина "<< i+1 << " связана с"<< endl;
            cin>>g[i][j];
            while (g[i][j]!=0){j++;
             cin >>g[i][j];
            }
        }

    for (int i=0; i<n; i++)
    {int j=0;
    cout<<i+1<<" : ";
        while (g[i][j]!=0){
             cout <<g[i][j];
                j++;
    }
    cout<<endl;
    }

    vector<char> part (n, -1);
bool ok = true;
vector<int> q (n);
for (int st=0; st<n; ++st)
	if (part[st] == -1) {
		int h=0, t=0;
		q[t++] = st;
		part[st] = 0;
		while (h<= t) {
			int v = q[h++];
			for (size_t i=0; i<g[v].size(); ++i) {
				int to = g[v][i]-1;
				if (part[to] == -1)
					part[to] = !part[v],  q[t++] = to;
				else
					ok &= part[to] != part[v];
			}
		}
	}

if (ok==true) cout << "Yes";
else cout << "No";
}
