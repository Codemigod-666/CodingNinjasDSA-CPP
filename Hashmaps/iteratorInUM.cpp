#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    unordered_map<string, int > ourmap;
    ourmap["rishi"] = 1;
    ourmap["tushar"] = 2;
    ourmap["yash"] = 3;
    ourmap["venu"] = 4;
    ourmap["teja"] = 5;
    ourmap["seja"] = 6;\

    unordered_map<string, int > ::iterator it;
    it = ourmap.begin();
    // while(it != ourmap.end() ){
        
    //     cout<<"Key: "<<it->first<< " Value: "<<it->second<<endl;

    //     it++;


    // }

    //  find iterator 
    unordered_map<string, int> :: iterator it2 = ourmap.find("teja");

    ourmap.erase(it,ourmap.end());

    cout<<it2->first<<" "<<it2->second<<endl;

}