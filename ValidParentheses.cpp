#include <iostream>
#include <string>
#include <stack>


using namespace std;

bool stackfunction(string s){

    stack<char> parenteses,chaves,colchetes;
    for (int j=0;j<s.length();j++){
        switch(s[j]){
        case '(':
            parenteses.push('(');
            break;
        case '{':
            chaves.push('{');
            break;
        case '[':
            colchetes.push('[');
            break;
        case ')':
            parenteses.pop();
            break;
        case '}':
            chaves.pop();
            break;
        case ']':
            colchetes.pop();
            break;
        }
    }

    if(parenteses.empty() == true && chaves.empty() == true && colchetes.empty() == true ){
        return true;
    }else{
        return false;
    }

}

bool isValid (string s){
    for (int i=0;i<s.length();i++){
    if(s[i] != '(' && s[i] != '[' && s[i] != '{' && s[i] != ')' && s[i] != '}' && s[i] != ']'){
            return false;
        }
    }
return true;
}

int main(){

    string input;
    cout <<"input string "<<endl;
    cin >>input;
    if(isValid(input) == false){
        cout <<"invalid string"<<endl;

    }
    else{

        if(stackfunction(input) == true){
            cout <<"valid parenteses"<<endl;
        }else{
            cout <<"invalid"<<endl;
        }

    }

    return 0;

}
