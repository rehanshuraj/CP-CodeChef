#include <bits/stdc++.h>
using namespace std;

// Function to compute frequency array F from A
vector<int> computeF(const vector<int>& A) {
    int N = A.size();
    vector<int> P(N), S(N), F(N+1, 0);
    
    // Compute prefix max
    P[0] = A[0];
    for(int i = 1; i < N; i++) P[i] = max(P[i-1], A[i]);
    
    // Compute suffix min
    S[N-1] = A[N-1];
    for(int i = N-2; i >= 0; i--) S[i] = min(S[i+1], A[i]);
    
    // Fill frequency array
    for(int i = 0; i < N; i++) {
        F[P[i]]++;
        F[S[i]]++;
    }
    F.erase(F.begin()); // Remove F[0] since numbers start from 1
    return F;
}

void generateAll(vector<int>& A, int pos, int N, const vector<int>& F_target , vector<vector<int>>& results) {
    if(pos == N) {
        //long long sum=0;
        vector<int> F_now = computeF(A);
        vector<int> lala;
        if(F_now == F_target) {
            for(int x : A){
               // cout << x << " ";
                lala.push_back(x);
                //sum+=x;
            }
            results.push_back(lala);
            cout << "\n";
        }
        
        return;
    }
    
    for(int x = 1; x <= N; x++) { // possible values are 1..N
        A[pos] = x;
        generateAll(A, pos+1, N, F_target,results);
    }
}

 bool isStrictlyDecreasing(const vector<int>& arr) {
            for (int i = 0; i < arr.size() - 1; i++) {
             if (arr[i] <= arr[i + 1]) return false;
            }
             return true;
        }

int main() {
    int t;
    cin>>t;
    while(t--){
        int N;
        cout << "Enter N: ";
        cin >> N;
        vector<int> F_target(N);
        cout << "Enter frequency array F: ";
        for(int i = 0; i < N; i++) {
            cin >> F_target[i];
        }
        vector<int> A(N);
        vector<vector<int>> results;    
        cout << "Possible arrays A:\n";
         generateAll(A, 0, N, F_target , results);


        // Function to check if array is strictly decreasing
       


        vector<int> selected;
        for (auto& arr : results) {
            if (isStrictlyDecreasing(arr)) {
               selected = arr;
               break;
            }
        }

       if (!selected.empty()) {
            cout << "Selected array: ";
            for (int x : selected) cout << x << " ";
            cout << endl;
        } else {
           cout << "-1" << endl;  // No valid array found
        }

        
    }
}
