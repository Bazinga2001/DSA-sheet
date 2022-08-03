# include <bits/stdc++.h>
using namespace std;

vector<int> min_max(vector<int>arr){
    sort(arr.begin(), arr.end());
    vector<int>res;
    res.push_back(arr[0]);
    res.push_back(arr[arr.size()-1]);

    return res;
}

int main(){
    vector<int>vec={55, 26, 9, 21, 65, 82, 96, 54, 60, 72, 51, 8, 30, 36, 58, 19, 42, 40, 32, 56, 61, 63, 44, 65, 6, 74, 17, 0, 50, 51, 83, 27, 60, 84, 54, 98, 76, 15, 85, 11, 6, 18, 3, 66, 34, 100, 11, 97, 74, 33, 50, 6, 67, 19, 19, 72, 13, 99, 51, 16, 19, 100, 14, 48, 20, 79, 73, 63, 38, 49, 50, 90, 86, 97, 60, 19, 2, 86, 55, 53, 4, 3, 98, 71, 88, 40, 15, 68, 87, 96, 72, 66, 62, 32, 41, 47, 82, 48, 50, 37};
    vector<int>res = min_max(vec);
    cout<<res[0]<<" "<<res[1];
    return 0;
}