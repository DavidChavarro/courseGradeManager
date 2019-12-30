//Header file
#include <string> 
using namespace std;
class Users {
  private:
    string username;//Creates a string attribute of users saved in the program.
    string password; //Creates a password string for user objects.
    bool isLoggedOn;
  public:
    Users();//Default constructor
    Users(string username);//Overloaded constructor, username only.
    Users(string username, string password);//Overloaded constructor for both username and password.

    void logon(string username, string password); //Logins user. Assigns "isLoggedOn" to true when account is verified.

    string getUsername(); //returns username by string.

    void changePassword(string oldPass, string newPass);//Changes user's password.
    //Password updates only after old password is verified.
};