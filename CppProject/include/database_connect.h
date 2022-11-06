#include <iostream>
#include <vector>

#include "db_connect.h"

using namespace std;

class DbConnectImpl {
    DbConnect& _dbc_;
public:
    DbConnectImpl(DbConnect&);
    bool LoginDb(string username, string pwd);

};