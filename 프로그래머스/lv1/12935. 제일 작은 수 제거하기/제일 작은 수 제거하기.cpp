#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int a = arr.at(0);
    for(int i = 0 ; i < arr.size() ; i++) 
    {
        if(a>arr[i]) a=arr[i];
    }
    arr.erase(remove(arr.begin(),arr.end(),a),arr.end());  
    if(arr.empty()) return {-1};
    return arr;
}