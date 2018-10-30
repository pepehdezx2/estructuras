//
//  main.cpp
//  estructuras
//
//  Created by Pepe Hdez hdez on 9/13/18.
//  Copyright © 2018 Pepe Hdez hdez. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> myPQ;
    if(myPQ.empty()){
        cout << "vacio" << endl;
    }
    myPQ.push(1);
    myPQ.push(2);
    myPQ.push(3);
    cout << "size: " << myPQ.size() << endl;
    cout << "primer elemento: " << myPQ.top() << endl;
    myPQ.pop();
    cout << myPQ.top() << endl;
    return 0;
}
