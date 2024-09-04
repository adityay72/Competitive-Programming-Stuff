#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

void shiftbackward(string &str , int shift){
    for(char &c : str){
        if(islower(c)){
            c = 'a' + (c - 'a' - shift +26)% 26;
        }
    }
}

void shiftforward(string &str, int shift){
    for(char &c : str){
        if(islower(c)){
            c = 'a' + (c - 'a' + shift) % 26;
        }
    }
}


int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    for(int i=0 ; i<n ; i++){
        int shift;
        string arr;
        cin >> shift;
        cin.ignore();
        getline(cin,arr);
        
        bool check =  (arr.find(" the ") != string::npos);
        
        if(check){
            shiftbackward(arr,shift);
        }
        else{
            shiftforward(arr,shift);
        }
        cout << arr << endl;
    }
    return 0;
}