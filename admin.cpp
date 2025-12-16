//sprawdzanie logowanie czy uzytkownik istnieje w systemie

#include <iostream>
#include <vector>
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

void sprawdzanie(){
    
}



int main(){
    vector<string> x = logowanie();
    cout << "nazwa: "<<x[0];
    return 0;
}
















