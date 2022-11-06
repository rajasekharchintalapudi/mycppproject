/* Copyright (C) 2022
 * Author - Rajasekhar Chintalapudi
 * FileName -
 *
 * All Rights Reserved
 */

#include <iostream>
#include <vector>

#include "database_connect.h"

DbConnectImpl::DbConnectImpl(DbConnect& dbc): _dbc_{dbc} {
    cout<<"Entered in Constructor"<<endl;
}

bool DbConnectImpl::LoginDb(string username, string pwd) {
    if(_dbc_.login(username,pwd)) {
        cout<<"Db login successful"<<endl;
        return true;
    }
    else {
        cout<<"Db login Failure"<<endl;
        return false;
    }
}
