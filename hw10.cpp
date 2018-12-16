#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{int n, m;
cin >>n;
cin>>m;
vector<pair<int, pair<int, int> > >g(m);
for(int i=0; i<m; i++){
    cin>> g[i].second.first>>g[i].second.second;
    cin>>g[i].first;
}
for(int i=0; i<m; i++){
    cout<< g[i].second.first<<" - "<< g[i].second.second<<" : ";
    cout<<g[i].first<< endl;
}
int cost=0;
vector <pair<int, int> > res;
sort(g.begin(), g.end());
vector <int> tree_id(n);
for (int i=0; i<n; i++){
    tree_id[i]=i+1;}
for (int i=0; i<m; i++){
    int a=g[i].second.first;
    int b= g[i].second.second;
    int l=g[i].first;
    if (tree_id[a]!=tree_id[b]){
        cost+=l;
        res.push_back(make_pair(a,b));
        int old_id=tree_id[b], new_id = tree_id[a];
        for (int j=0; j<n; j++)
            if(tree_id[j]==old_id)
            tree_id[j]=new_id;}}
for (int i=0;i<res.size(); i++ ){
    cout<< res[i].first<<" -! "<<res[i].second<< endl;
}
cout<< "cost "<< cost;
}
