#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;
    for(int i = 0;i < S.size() ; i++){
        if(N + int(S[i] - 'A') <= 25){
            S[i] = int(S[i] + N);
        }
        else{
            S[i] = int(S[i] + N - 26);
        }
    }
    for (int i = 0; i < S.size(); i++)
    {
        cout << S[i];
    }
    cout << endl;
}