#include <iostream>
using namespace std;
unsigned int memory[1000];

unsigned long  long lucas(int n){
if(n==0) return 2;
if(n==1) return 1;
return lucas(n-1) + lucas(n-2);
}

unsigned long long smart_lucas( int n){
if(memory[n]!=-1) return memory[n];
return lucas(n-1)+lucas(n-2);
 int l1=lucas(n-1);
 int l2=lucas(n-2);
  memory[n]=l1+l2;
  return memory[n];
}

unsigned long long lucas2( int n){
    fill(begin(memory),end(memory),-1);
     memory[0]=2;
     memory[1]=1;
     return smart_lucas(n);
}

int main()
{

char rep;
cout << "     Press N for Naive Lucas " << endl;
cout << " or  Press S for Start Lucas " <<endl;
 cin>> rep;

 switch(rep){

 case 'N':

{
    int number ;
    cout << "Enter the number for Naive Lucas : ";
cin >> number;

unsigned long long naiveLucas;
for(int i=0; i <= number; i++) {

naiveLucas = lucas(i);
cout <<" Naive Lucas ("<< i <<") = " << naiveLucas<< " " << endl;
}

unsigned long long *naive = new unsigned long long [naiveLucas];
for(int i =0; i<naiveLucas; i++){
naive[i] =0;
}
naive[0] = -127;
delete[] naive;
break;
cout << "Thank " <<endl;

}


 case 'S' :{
 /// we initialize memory
    for(int i=0; i<1000; i++) {
memory[i] = -1;
}
int n;
cout << "Enter the number for Smart Lucas : ";
cin >> n;


/// print the result nicely
unsigned long long result;
for(int i=0; i<= n; i++) {
result= lucas2(i);

cout <<" Smart Lucas ("<< i <<") = " << result << " " << endl;
}

unsigned  long long *memoir = new unsigned long long [result]; /// we want to save the data in memoir
for(int i =0; i<result; i++){
memoir[i] =0;
}
memoir[0] = -127;
delete[] memoir;
 break;
 cout << "Thank  " <<endl;

 }

    return 0;
}
}
