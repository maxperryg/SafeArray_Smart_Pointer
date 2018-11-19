//
//  main.cpp
//  SafeArray
//
//  Created by Maxwell Perry Grossman on 11/19/18.
//  Copyright © 2018 Maxwell Perry Grossman. All rights reserved.
//

#include <iostream>

int main(){
    SA a(10), b(3,5);
    b[3]=3; b[4]=4; b[5]=5;
    int i;
    for( i=0;i<10;i++)
        a[i]=10-i;
    cout<<"printing a the first time“ <<endl;
    cout<<a<<endl;
    cout<<"printing using []"<<endl;
    for( i=0;i<10;i++)
        cout<<a[i]<<endl;
    // write your own sort
    Sort(a,10);
    cout<<"printing a the second time“ <<endl;
    cout<<a<<endl;
    b[4]=12;
    cout<<"printing b “ <<endl;
    cout<<b<<endl;
    a[10]=12; // should print an error message and exit
    return 0;
} 
