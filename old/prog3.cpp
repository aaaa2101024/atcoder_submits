#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    vector<vector<long long>> A(H,vector<long long>(W));
    vector<vector<long long>> B(W,vector<long long>(H));
    for(int i = 0;i < H;i++){
        for (int j = 0; j < W; j++)
        {
            cin >> A[i][j];
        }   
    }
    for(int j = 0 ; j < W ; j++){
        for(int i = 0; i < H;i++){
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }

}