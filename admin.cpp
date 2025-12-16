//sprawdzanie logowanie czy uzytkownik istnieje w systemie

#include <iostream>
#include <vector> //jak lista w pythonie
#include <map> //jak slownik w pythonie
using namespace std;


vector<string> logowanie(){ //mozna zwracac dane w rozncyh foramtach ale trzbe to doprecyzowac
    string login, haslo;
    cout <<"Podaj login: "<<endl;
    cin >> login;
    cout << "Podaj hasło: "<<endl;
    cin>> haslo;
    vector<string> pasy = {login, haslo};
    return pasy;
}
map<string, vector<string>> database(){
    map<string, vector<string>> users = {
        {"MrBasis",{"MrBasis","1234","Admin"}},
        {"Eva",{"Eva","67","user"}}
    };
    return users;
}

void sprawdzanie(){
    map<string, vector<string>> baza = database();
    vector<string> user = logowanie();
    
}



int main(){
    //vector<string> x = logowanie();
    return 0;
}
















