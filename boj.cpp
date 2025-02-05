#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> pokemon;
    vector<string> numbertoname;

    string name;

    for (int i = 0; i<n; i++){
        cin >> name;
        pokemon.insert({name, i+1});
        numbertoname.push_back(name);
    }

    for (int i = 0; i < m ; i++){
        string input;
        cin >> input;
        if (isdigit(input[0])){
            cout << numbertoname[stoi(input)-1] << "\n";
        }
        else {
            cout << pokemon[input] << "\n";
        }
    }

}
