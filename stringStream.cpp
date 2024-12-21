#include <iostream>
#include <sstream> //stringstream is defined in sstream header file
#include <vector>
using namespace std;

int main(){
    string str= "1 2 3 4 5 6";
    // delimiter is set to space here 
    stringstream ss(str); //passing string as buffer in the stringstream

    vector<int> nums;
    int num;
    while(ss>>num){
        nums.push_back(num);
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;

}