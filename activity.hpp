//
// Created by dldms on 11/19/2018.
//

#ifndef BONUSACTIVITY_ACTIVITY_HPP
#define BONUSACTIVITY_ACTIVITY_HPP
#include <map>
#include <iterator>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
class Activity {
private:
    map<double, string> tonyNameAndGpa;
    map<double, string> samNameAndGpa;
public:
    void tonyPopulateFriendList();
    void samPopulateFriendList();
    map<double, string> mergeList();
};

#endif //BONUSACTIVITY_ACTIVITY_HPP
