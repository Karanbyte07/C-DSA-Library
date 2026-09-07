#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;


int main (){
    //creation
    unordered_map<string, int> mp;

    //insertion
    //method 1
    pair<string, int> p = make_pair("abc", 1);
    mp.insert(p);

    //method 2
    pair<string, int> p2("def", 2);
    mp.insert(p2);

    //method 3
    mp["ghi"] = 3;

    //search
    cout << mp["abc"] << endl;
    cout << mp.at("def") << endl;

    // cout << mp.at("unoknown") << endl; //this will throw an error
    cout << mp["unoknown"] << endl; //this will create a new key with value 0

    //size
    cout << "Size: " << mp.size() << endl;

    //to check presence
    cout << "ghi is present or not: " << mp.count("ghi") << endl; 
    cout << "jkl is present or not: " << mp.count("jkl") << endl;

    //erase
    mp.erase("ghi");

    //traversal
    for (auto i : mp){
        cout << i.first << " " << i.second << endl;
    }

    //using iterator
    unordered_map<string, int> :: iterator it = mp.begin();
    while (it != mp.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }




}