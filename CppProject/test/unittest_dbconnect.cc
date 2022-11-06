/* Copyright (C) 2022
 * Author - Rajasekhar Chintalapudi
 * FileName -
 *
 * All Rights Reserved
 */

#include <iostream>
#include <vector>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "database_connect.h"

using namespace std;
using ::testing::Return;
using ::testing::AtLeast;
using ::testing::_;

class DbConnectMock : public DbConnect {
public:
    DbConnectMock() {cout << "Mock DB constructor"<<endl;}
    MOCK_METHOD1(logout, bool(string username));
    MOCK_METHOD2(login, bool(string username, string password));
};

TEST(DbConnectImpl, LoginTest) {
    // Arrange
    DbConnectMock mdb;
    DbConnectImpl db(mdb);
    EXPECT_CALL(mdb, login("Raj", "Sekhar"))
    .Times(2)
    .WillOnce(Return(true));

    // Act
    bool retvalue = db.LoginDb("Raj", "Sekhar");

    // Assert
    EXPECT_EQ(true, retvalue);
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}