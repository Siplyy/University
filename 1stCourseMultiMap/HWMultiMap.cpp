#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using std::map;
using std::pair;
using std::vector;
using std::string;
using std::multimap;
using std::cout;
using std::cin;
using std::endl;
using std::pair;

vector<pair<string,int>> func(multimap<int, string> mp1, map<int, int> mp2, vector<pair<string,int>> vec){
    vector<pair<string,int>> result;
    for (int i = 0; i < vec.size(); ++i){
        map<int, int> ::iterator it = mp2.find(vec[i].second);
        int a = it -> second;
        if (vec[i].first == mp1.find(a)->second){
            result.push_back(make_pair(vec[i].first, vec[i].second));
        }
    }
    std::sort(result.begin(),result.end(),[](pair<string, int> a, pair<string,int> b){return (a.second >= b.second);});
    return result;
}

int main() {
    multimap<int, string> mp1{{1, "string"}, {2, "not string"}, {3, "null"}};
    map<int, int> mp2{{15, 1}, {21, 2}, {33, 3}};
    vector<pair<string,int>> vec{{"string", 15}, {"nothing", 33}, {"not string", 21}};
    vector<pair<string,int>> result = func(mp1, mp2, vec);
    for (int i = 0; i < result.size(); ++i){
        cout << result[i].first << " " << result[i].second << endl;
    }
}