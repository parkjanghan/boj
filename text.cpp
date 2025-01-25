#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;



int main() {
    int n, m;
    cin >> n >> m;

    //1. input
    vector<vector<int>> a(n+1,vector<int> (m+1));    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    int sumMax = 0;
    int count = 0;

    //2. check type-1
    for (int i = 1; i <= n; i++){
        for (int j = 1; j+3 <= m; j++){
            sumMax = max(a[i][j] + a[i][j+1] + a[i][j+2] + a[i][j+3], sumMax); 
            count++;
        }
    }
    for (int i = 1; i+3 <= n; i++){
        for (int j = 1; j <= m; j++){
            sumMax = max(a[i][j] + a[i+1][j] + a[i+2][j] + a[i+3][j], sumMax); 
            count++;
        }
    }

    //3. check type-2
    for (int i = 1; i+1 <= n; i++){
        for (int j = 1; j+1 <= m; j++){
            sumMax = max(a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1], sumMax); 
            count++;
        }
    }

    //4. check type-3 (L shape)
    for (int i = 1; i+2 <= n; i++){
        for (int j = 1; j+1 <= m; j++){
            for (int k =0; k<3; k++){
                sumMax = max(a[i][j] + a[i+1][j] + a[i+2][j] + a[i+k][j+1], sumMax); 
                sumMax = max(a[i][j+1] + a[i+1][j+1] + a[i+2][j+1] + a[i+k][j], sumMax);
            }
            sumMax = max(a[i][j] + a[i+1][j] + a[i+1][j+1] + a[i+2][j+1], sumMax); 
            sumMax = max(a[i][j+1] + a[i+1][j] + a[i+1][j+1] + a[i+2][j], sumMax);
            count++;
        }
    }

    for (int i = 1; i+1 <= n; i++){
        for (int j = 1; j+2 <= m; j++){
            for (int k =0; k<3; k++){
                sumMax = max(a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+k], sumMax); 
                sumMax = max(a[i+1][j] + a[i+1][j+1] + a[i+1][j+2] + a[i][j+k], sumMax);
            }
            sumMax = max(a[i][j] + a[i][j+1] + a[i+1][j+1] + a[i+1][j+2], sumMax); 
            sumMax = max(a[i+1][j] + a[i][j+1] + a[i+1][j+1] + a[i][j+2], sumMax);
            count++;
        }
    }

    cout << sumMax ;

}

