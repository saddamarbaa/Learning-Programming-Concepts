/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

   while loop example
  c++ program ask user to enter single char then
  repeat asking same question as long as user input != 'n'
  for anther number
*/

#include <iostream>
using namespace std;
// the  Driver Code
int main()
{
    char a;

    // asking user input
    cout << "Enter single char :";
    cin >> a;

    while (a != 'n')
    {
        cout << "* * \n";
        cout << "Enter another char :";
        cin >> a;
    }

     return 0;// signal to operating system everything works fine

}/** End of main function */

