#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct testcase
{
    int M;
    int N;
    int x;
    int y;
};

int lcd(int a, int b)
{
    int aOriginal = a;
    int bOriginal = b;
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return aOriginal * bOriginal / a;
}

int main()
{
    int T;
    cin >> T;
    // vector<testcase> testcases(T);

    for (int t = 0; t < T; t++)
    {
        int M, N, x, y;
        cin >> M >> N >> x >> y;

        // 최소 공배수 구하기
        // lcd(M, N);

        // 최소 공배수까지 bruteForce하게 날짜 구하기

        int count = 0;
        bool find = false;

        for (int i = x; i <= lcd(M, N); i += M)
        {
            int NCopy = i%N;
            if (NCopy == 0) NCopy = N;

            // cout << MCopy << " " << NCopy << endl;
            if (NCopy == y)
            {
                find = true;
                count = i;
                break;
            }
        }

        // -1 출력
        if (find)
        {
            cout << count << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}
