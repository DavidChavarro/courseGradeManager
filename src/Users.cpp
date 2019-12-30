#include <iostream>
#include <string>
#include "Users.h"
using namespace std;
Users::Users() {//Default constructor
  Users::username = "Guest";
  Users::password = "password";
  Users::isLoggedOn = false;
}
Users::Users(string username) {//Constructor with usernanme only.
  Users::this.username = username;
  Users::password = "password";
  Users::isLoggedOn = false;
} 
Users::Users(string username, string password) {
  Users::this.username = username;
  Users::this.password = password;
  Users::isLoggedOn = false;
}

Users::logon(string username, string password) {//Logs in user unless "~" is inputted.
do {
cout<<"Username : "
}
while (this.username != username)
}
