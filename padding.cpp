#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;


string newRightPad(string& str, int num, char ch){
  int strPadDiff = 0;

  if(num > str.length()){
    strPadDiff = (num - str.length());
    str.append(strPadDiff, ch);
  }else{
    cout << "Desired string size is greater than initial string length" << endl;
  }
  return str;
}

// overload, if no char padding specified, space will be used
string newRightPad(string& str, int num){
  int strPadDiff = 0;

  if(num > str.length()){
    strPadDiff = (num - str.length());
    str.append(strPadDiff, ' ');
  }else{
    cout << "Desired string size is greater than initial string length" << endl;
  }
  return str;
}

string newLeftPad(string& str, int num, char ch){

  reverse(str.begin(), str.end());
  str = newRightPad(str, num, ch);
  reverse(str.begin(), str.end());
  
  return str;
}

// overload, if no char padding specified, space will be used
string newLeftPad(string& str, int num){

  reverse(str.begin(), str.end());
  str = newRightPad(str, num, ' ');
  reverse(str.begin(), str.end());
  
  return str;
}


int main(){
 
  string str = "String";

  newRightPad(str, 12, '#');
  cout << str << " <-right padded string" << endl;

  str = "String";

  newRightPad(str, 15);
  cout << str << " <-right padded string" << endl;

  str = "String";

  newLeftPad(str, 12, '#');
  cout << str << " <-left padded string" << endl;

  str = "String";

  newLeftPad(str, 15);
  cout << str << " <-left padded string" << endl;


  return 0;
}
