#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string test= "test1 test2 test3";
    stringstream ss(test);
    string token=ss>>token;
    cout<<ss.eof()<<endl;
    while(ss.eof()){
        cout<<(ss>>token)<<endl;
        cout<<ss.eof()<<endl;
    }
    cout<<ss.eof()<<endl;
    return 0;
}