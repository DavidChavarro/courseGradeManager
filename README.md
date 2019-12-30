# courseGradeManager
Stores and displays college course grades for students taking a Bachelors Degree Course. GPA is calculated on a four-points scale.

This program runs on c++.
## License
This project holds the GNU General Public license v3.0,
  permitting users to duplicate this 
  program and/or clone the Github 
  repository. Modifying the code and/or 
  reverse engineering the program, however, 
  is PROHIBITED in accordance with the license.

For more information, please consult the "LICENSE" file.
## Classes
Lists all classes and gives their overview. 
  Functions of each class specified in detail.
NOTE: Assume each class discussed in this document
  represents both the header and body files.
### main
Executes as a program driver.
### Users
Class for users containing credential information. Other overloaded classes included.
#### Functions
public string getUsername() - "username" variable accessor.
public void changePassword() - Changes user's password. Password updates only after old password is verified.
public void logOn(string username, string password) - Logs in user. Verifies that the credentials are filled in before the function evaluates it. If the user's account does not have a password, the user puts "~" in password.
#### Constructor
Default: constructs user's object 