//
//  main.cpp
//  SafeArray
//
//  Created by Maxwell Perry Grossman on 11/19/18.
//  Copyright © 2018 Maxwell Perry Grossman. All rights reserved.
//

#include <iostream>
#include "SafeArray.cpp"
int main(){
    SA<int> a(10), b(3,5);
    b[3]=3; b[4]=4; b[5]=5;
    int i;
    for( i=0;i<10;i++)
        a[i]=10-i;
    cout<<"printing a the first time"<<endl;
    cout<<a<<endl;
    cout<<"printing using []"<<endl;
    for( i=0;i<10;i++)
        cout<<a[i]<<endl;
    // write your own sort
    
    //a[10]=12; // should print an error message and exit
    
    //New SA Code
    cout<<"Now to test the Initializer List"<<endl<<endl<<endl;
    SA<int> s1(10);
    SA<int> s2(1,6);
    
    for(int i=0;i<10;i++){
        s1[i]=10-i;
        cout<<s1[i]<<" ";
    }
    cout<<endl;
    
    for(int i=1;i<=6;i++){
        s2[i]=i;
        cout<<s2[i]<<" ";
    }
    cout<<endl;
    
    SA<int> s3{1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++){
        cout<<s3[i]<<" ";
    }
    cout<<endl;
    
    return 0;
} 
