// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;
// int N;
// vector<pair<int, int>> arr;
// int maxPayment = 0;

// void dfs(int cnt, int paymentSum){
//     if(cnt > N){
//         // 날짜 오버 되는지 체크
        
//         maxPayment = max(maxPayment, paymentSum);
//         cout << "paymentSum  : " << paymentSum << endl;
//         return;
//     } 
//     for (int i = cnt; i <= N; i++){
//         cout << "Cnt : " << i << endl;
//         int nextCnt = i + arr[i].first;
//         if (nextCnt <= N+1) paymentSum += arr[i].second;
//         if (nextCnt == N && arr[nextCnt].first == 1){
//             paymentSum += arr[nextCnt].second;
//         }
        
//         dfs(nextCnt, paymentSum);

//         if (nextCnt <= N) paymentSum -= arr[i].second;
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false); cin.tie(NULL);

//     //input
//     cin >> N;
//     arr.resize(N+1);

//     for (int i = 1; i<=N; i++){
//         int counselTime, payment;
//         cin >> counselTime >> payment;
//         arr[i] = {counselTime, payment};
//     }
//     //dfs
//     dfs(1, 0);

//     //print
//     cout << maxPayment;

// }
