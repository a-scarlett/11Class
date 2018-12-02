#include <iostream>

using namespace std;

int main()
{ setlocale(LC_ALL, "Russian");
int INF=1000;
int n, m;
cin>>n;
int d[n][n];
for (int i=0; i<n;i++){
    for (int j=i+1; j<n; j++){
        cout<<"Каково расстояние между "<< i+1 <<" и "<<j+1 <<"?"<<endl;
        cin>>m;
        if (m==-1) d[i][j]=INF;
    else {d[i][j]=m;
    d[j][i]=m;}}}
    for (int i=0; i<n; i++){d[i][i]=0;}

    for (int k=0; k<n; ++k)
	for (int i=0; i<n; ++i)
		for (int j=0; j<n; ++j)
			d[i][j] = min (d[i][j], d[i][k] + d[k][j]);

    for (int i=0; i<n;i++){
    for (int j=0; j<n; j++){
    cout<<d[i][j];}
    cout<<endl;
}
}
