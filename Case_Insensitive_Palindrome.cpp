#include<bits/stdc++.h>
using namespace std;

int main(){
   // write your code here
   int t;
   cin >> t;
   for(int i=0;i<t;i++){
       string str;
       cin >> str;
       int flag = 0;
       int length = str.length();
       for(int i = 0;i<length;i++){
           if(tolower(str[i]) != tolower(str[length-i-1])){
               flag = 1;
               break;
           }
       }
       if(flag == 1){
           cout << "No" << "\n";
       }
       else{
           cout << "Yes" << "\n";
       }
   }
    return 0;
}