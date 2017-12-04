#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>
using namespace std;
/// In this Lab1 we are going to implement the Greedy algorithm change-making
///  we will write a function that takes a vector and the amount as a parameter

 void change(vector <int> coins, int value){
 vector <int> result;         /// this vector will hold the result and we will assume that the vector is sorted from high to low
 map<int,int> dup;
 for(int i=0; i<coins.size();i++){
    while(value>=coins[i]){            /// we test if value is greater or equal to current value
                                       ///   in the list we add that value to my new list and subtract
    result.push_back(coins[i]);
      value=value-coins[i];

    }
 }
    for_each( result.begin(), result.end(), [&dup]( int val ){ dup[val]++; } );  /// this help to deal with duplicate elements

    for( auto p : dup ) {
        cout  <<  "We have " << p.second << ' ' <<  " time(s) " << p.first  << endl;
    }
}



void input(){
 vector<int> hell;
int p;
do{
        cout << "give me your number" << endl;
      cin>> p;
      hell.push_back(p);

}while(p!=0 && p!=-1);

cout << " Give me your amount" << endl;
int value;
cin>> value;

change(hell,value);
}


int main()
{
cout << "Greedy change-making Algorithm  ?  " << endl;
//vector<int> changes={100,50,25,10,5,1};

   //change(changes,195);
   input();
     return 0;
}
