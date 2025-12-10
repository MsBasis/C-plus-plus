//yo
// clang++ test.cpp -o main
// kompiler nazwa pliku output nazwa funkcji


#include <iostream>           //main library - pozwala na uzywanie zwyklych rzeczy w c jak cout
using namespace std;          //ze mozemy wywolac po nazwie z biblioteki powyzej cout,a nie np std::cout

int dodawanie(){
    int x =10, y=10, z=10;
    cout<<x+y+z<<"\n";
    int a = 1;
    int b = 1;
    int sum = a + b;
    return sum;
}
string login(){
    const string login = "MrBasis";
    return login;
}
int ID = 1234;

int tester(){                   //main - nazwa, int - zwraca liczbe (return 0)
    double number = 21.0976;  //typ nazwa = zmienna, int, double(float inaczej), char='a', string, bool
    cout << "Hello" << "\n";  //\n robi to samo co endl, tyle ze \n przesunie myszke do nowej linijki
    cout << number << endl;  //cout - console output, << to co bedzie po tym to idzie do konsoli, endl - zakonczenie linii
    cout << "i'am "<<number<<" years old"<<endl;
    cout << dodawanie()<<"\n";
    cout<<login()<<"\n";
    cout<<ID;
    return 0;                 //zwracanie 0 - oznacza ze program sie udal jest to informacja dla systemu czy wszystko G
}
//witanie
string hej(){
    string imie;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    return imie;
}

int main(){
    string name = hej();
    cout<<"Witaj "<< name;
    return 0;
}


