#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<string, int> ourmap;
    //insert
    pair<string, int> p("abc", 1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    // find or access elements::::::::::::::::::

    cout<<ourmap["abc"]<<endl;
    // cout<<ourmap.at("ghi")<<endl;
    cout<<ourmap["ghi"]<<endl;
    (ourmap["abc"])++;
    // check presense

    cout<<ourmap["abc"]<<endl;

    if(ourmap.count("ghi")>0){
        cout<<"exist"<<endl;
    }
    ourmap.erase("abc");
    cout<<ourmap.size()<<endl;
}