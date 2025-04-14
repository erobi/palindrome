#include <iostream>
#include <iomanip>

using namespace std;

string reverse_string(string fwd)
{
    string reverse = "";
    
    
    for(int i = fwd.length() - 1; i >= 0; i--)
    {
        reverse += fwd[i];
    }

    return reverse;
}

// palindrome is a word that's the same forward and backwards
bool is_palindrome(string text)
{
    bool isPali = false;

    string reverse = reverse_string(text);

    if(text == reverse)
        isPali = true;

    return isPali;
}

int main()
{
//   cout << is_palindrome("madam") << "\n";
//   cout << is_palindrome("ada") << "\n";
//   cout << is_palindrome("lovelace") << "\n";

  string input;

  cout << "Palindrome (n): a word, phrase, or sequence that reads the same backward as forward.\n" << endl;
  cout << "Determine if a word is a palindrome or not.\n" << endl;
  cout << "Enter word (type q! to quit): ";
  cin >> input;

  while(input != "q!")
  {
    cout << boolalpha << is_palindrome(input) << endl;

    cout << "\nEnter word: ";
    cin >> input;
  }
  
}