//
// Created by dldms on 11/19/2018.
//
#include "activity.hpp"
using namespace std;
void Activity::tonyPopulateFriendList() {
    string name;
    double gpa;
    string input = "";
    int count = 0;
    while(input != "quit") {
        if (count%2 == 0) {
            getline(std::cin, input);
            cout<<"Enter Name"<<endl;
            name = input;
        } else {
            cout<<"Enter GPA"<<endl;
            getline(std::cin, input);
            gpa = atof(input.c_str());
            tonyNameAndGpa.insert(make_pair(gpa, name));
        }
        cout<<"Type quit to quit";
        count++;
    }

    for (map<double, string>::iterator i = tonyNameAndGpa.begin(); i != tonyNameAndGpa.end(); i++)
    {
        cout << i->second << " " << i->first<<"\n";
    }
}

void Activity::samPopulateFriendList() {
    string name;
    double gpa;
    string input;
    int count = 0;
    while(input != "quit") {
        if (count%2 == 0) {
            getline(std::cin, input);
            cout<<"Enter Name"<<endl;
            name = input;
        } else {
            cout<<"Enter GPA"<<endl;
            getline(cin, input);
            gpa = atof(input.c_str());
            samNameAndGpa.insert(make_pair(gpa, name));
            cout<<"Type quit to quit";
        }

        count++;
    }


    for (map<double, string>::iterator i = samNameAndGpa.begin(); i != samNameAndGpa.end(); i++)
    {
        cout << i->second << " " << i->first<<"\n";
    }
}

map<double, string> Activity::mergeList() {
    map<double, string> mergedList;
    map<double, string>::iterator i2 = tonyNameAndGpa.begin();
    for (map<double, string>::iterator i = samNameAndGpa.begin(); i != samNameAndGpa.end(), i2 != tonyNameAndGpa.end(); i++, i2++)
    {
        mergedList.insert(*i);
        mergedList.insert(*i2);
    }
}

