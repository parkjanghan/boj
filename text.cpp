#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> a(N);
    int closest = 0;

    for (vector<int>::iterator it = a.begin(); it < a.end(); it++){
        cin >> *it;
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < i; j++){
            for (int k = 0; k < j; k++){
                if (a[i]+a[j]+a[k] <= M && a[i]+a[j]+a[k] > closest ){
                    closest = a[i]+a[j]+a[k];
                }
                //cout << a[i] << " " << a[j] << " " << a[k] << "\n" ;
            }
        }
    }

    cout << closest;
}

