#include <bits/stdc++.h>
using namespace std;

map < int, vector < int > > adj;
vector < int > nodes;
map < int, bool > visited;
vector < int > aux;
int longer = -1, node = 0;
int n;

void dfs(int i) {
    if (visited[i]) return;
    visited[i] = true;
    aux.push_back(i);

    int pos = 0;
    for (auto j : adj[i]) {
        if (adj.find(j) == adj.end())
            adj[i].erase(adj[i].begin() + pos);
        else
            dfs(j);
        pos++;
    }
}

void path () {
    for (auto u : nodes) {
        //cout << u << endl;
        dfs(u);

        /*for (auto i : aux)
            cout << i << " ";
        cout << endl << endl;*/

        //cout << aux.size() << endl;
        if (aux.size() > longer) {
            longer = aux.size();
            node = u;
        }
        aux.clear();
        visited.clear();
    }
    cout << node << endl;
    dfs(node);
    for (auto i : aux)
        cout << i << " ";
    cout << endl;
}

void solve() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;

        nodes.push_back(aux);

        adj[aux].push_back(aux * 2);
        if (aux % 3 == 0)
            adj[aux].push_back(aux / 3);
    }
    //cout << nodes.size() << endl;
    path();

    /*
    for (auto i : lista)
        cout << i << " ";
    cout << endl << endl;
    */
    /*
    for (auto i = adj.begin(); i != adj.end(); i++) {
        cout << i->first << " -> ";
        for (auto j : i->second)
            cout << j << " ";
        cout << endl;
    }*/
}

int main () {
    solve();
}