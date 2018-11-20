#include <iostream>
#include"activity.hpp"
int main() {
    Activity ac1;
    map<double, string> mergedList;
    ac1.samPopulateFriendList();
    ac1.tonyPopulateFriendList();
    mergedList = ac1.mergeList();
    return 0;
}