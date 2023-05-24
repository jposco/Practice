#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    //for(int i =0; i <arr.size();i++)
    //{
    //    answer+=arr[i];
    //}
    for(auto i : arr)
        {
            answer+=i;
        }
    answer/=arr.size();    
    return answer;
}