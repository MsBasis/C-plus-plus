//sprawdzanie logowanie czy uzytkownik istnieje w systemie

#include <iostream>
#include <vector> //jak lista w pythonie
#include <map> //jak slownik w pythonie
using namespace std;

//przyjmujr login i haslo od uzytkownika i zwraca jako vector
vector<string> logowanie(){ //mozna zwracac dane w rozncyh foramtach ale trzbe to doprecyzowac
    string login, haslo;
    cout <<"Podaj login: "<<endl;
    cin >> login;
    cout << "Podaj hasło: "<<endl;
    cin>> haslo;
    vector<string> pasy = {login, haslo};
    return pasy;
}
//mini baza uzytkownikow
map<string, vector<string>> database(){
    map<string, vector<string>> users = {
        {"User1",{"MrBasis","1234","Admin"}},
        {"User2",{"Eva","67","User"}},
        {"User3",{"Mira","21","User"}}
    };
    return users;
}
//sprawdzanie czy dany uzytkownik jest adminem czy nie
void sprawdzanie(){
    map<string, vector<string>> baza = database();
    vector<string> user = logowanie();
    int rozmiar = baza.size();
    
    for (auto &[key, vec] : baza) {
        if (!vec.empty()) {
            if (vec[0] == user[0] && vec[1] == user[1]) {
                if (vec[2] == "Admin") {
                    cout << "You're an Admin."<<endl;
                    cout << "You've access to every file."<<endl;
                } else {
                    cout << "You're an User."<<endl;
                    cout<< "You've to pay Admin 5$ to become an Admin."<<endl;
                }
            }
        }
    }
}

int main(){
    sprawdzanie();
    return 0;
}
















