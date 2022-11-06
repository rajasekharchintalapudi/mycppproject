#include <iostream>

using namespace std;

class DbConnect {
public:
    virtual bool login(string username, string password) {cout <<"LOGIN"<<endl; return true;}
    virtual bool logout(string username) {cout <<"LOGOUT"<<endl; return true;}
};