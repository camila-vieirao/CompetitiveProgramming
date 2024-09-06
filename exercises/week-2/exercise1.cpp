#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

pair<vector<int>, vector<int>> find_subsets_with_same_sum(const vector<int>& S) {
    unordered_map<int, vector<int>> sum_dict;
    int n = S.size();

    for (int i = 1; i < (1 << n); ++i) {
        vector<int> subset;
        int subset_sum = 0;
        
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(S[j]);
                subset_sum += S[j];
            }
        }
        
        if (sum_dict.find(subset_sum) != sum_dict.end()) {
            return {sum_dict[subset_sum], subset};
        }
        
        sum_dict[subset_sum] = subset;
    }
    
    return {{}, {}};
}

int main() {
    int T;
    cin >> T;
    
    for (int case_num = 1; case_num <= T; ++case_num) {
        int n;
        cin >> n;
        vector<int> S(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> S[i];
        }
        
        cout << "Case #" << case_num << ":\n";
        
        auto result = find_subsets_with_same_sum(S);
        
        if (!result.first.empty() && !result.second.empty()) {
            for (int num : result.first) {
                cout << num << " ";
            }
            cout << "\n";
            for (int num : result.second) {
                cout << num << " ";
            }
            cout << "\n";
        } else {
            cout << "Impossible\n";
        }
    }
    
    return 0;
}