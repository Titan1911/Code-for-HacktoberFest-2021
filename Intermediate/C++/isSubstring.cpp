#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string findSubSeq(string main,string sub){
 int i=0,count=0;
 int msize=main.size();
 int ssize=sub.size();
 
 while(i<msize && count<ssize){
  if (main[i]==sub[count])count++;
  i++;
  }
 
 if(ssize==count)return "Match Found";
 
 return "Not Found";
}

int main(){
 
 string main,sub;
 getline(cin,main);
 getline(cin,sub);

 string result = findSubSeq(main,sub);
 cout<<result<<"\n";
 return 0;
}
