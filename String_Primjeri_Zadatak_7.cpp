#include <iostream>
using namespace std;

int main()
{
    //Example: Length of String Object
    string str = "C++ Programming";

    // you can also use str.length()
    cout << "String Length = " << str.size();

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //Example: Length of C-style string
    char str[] = "C++ Programming is awesome";

    // you can also use str.length()
    cout << "String Length = " << strlen(str);

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    //Example 1: Concatenate String Objects
    string s1, s2, result;

    cout << "Enter string s1: ";
    getline (cin, s1);

    cout << "Enter string s2: ";
    getline (cin, s2);

    result = s1 + s2;

    cout << "Resultant String = "<< result;

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //Example 2: Concatenate C-style Strings
    char s1[50], s2[50], result[100];

    cout << "Enter string s1: ";
    cin.getline(s1, 50);

    cout << "Enter string s2: ";
    cin.getline(s2, 50);

    strcat(s1, s2);

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2;

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    //Example 1: Copy String Object
    string s1, s2;

    cout << "Enter string s1: ";
    getline (cin, s1);

    s2 = s1;

    cout << "s1 = "<< s1 << endl;
    cout << "s2 = "<< s2;

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //Example 1: Copy C-Strings
    char s1[100], s2[100];

    cout << "Enter string s1: ";
    cin.getline(s1, 100);

    strcpy(s2, s1);

    cout << "s1 = "<< s1 << endl;
    cout << "s2 = "<< s2;

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    //Example: Sort Words in Dictionary Order
    string str[10], temp;

    cout << "Enter 10 words: " << endl;
    for(int i = 0; i < 10; ++i)
    {
      getline(cin, str[i]);
    }

    for(int i = 0; i < 9; ++i)
       for( int j = i+1; j < 10; ++j)
       {
          if(str[i] > str[j])
          {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
          }
    }

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < 10; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    //Example 1: Remove all characters except alphabets
    string line;
    cout << "Enter a string: ";
    getline(cin, line);

    for(int i = 0; i < line.size(); ++i)
    {
        if (!((line[i] >= 'a' && line[i]<='z') || (line[i] >= 'A' && line[i]<='Z')))
        {
            line[i] = '\0';
        }
    }
    cout << "Output String: " << line;
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    //Example 1: Remove all characters except alphabets C-Strings
    char line[100], alphabetString[100];
    int j = 0;
    cout << "Enter a string: ";
    cin.getline(line, 100);

    for(int i = 0; line[i] != '\0'; ++i)
    {
        if ((line[i] >= 'a' && line[i]<='z') || (line[i] >= 'A' && line[i]<='Z'))
        {
            alphabetString[j++] = line[i];

        }
    }
    alphabetString[j] = '\0';

    cout << "Output String: " << alphabetString;
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    //C++ Program to Find the Number of Vowels, Consonants, Digits and White Spaces in a String From a C-style string
    char line[150];
    int vowels, consonants, digits, spaces;

    vowels =  consonants = digits = spaces = 0;

    cout << "Enter a line of string: ";
    cin.getline(line, 150);
    for(int i = 0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
        }
        else if (line[i]==' ')
        {
            ++spaces;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White spaces: " << spaces << endl;

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    //C++ Program to Find the Number of Vowels, Consonants, Digits and White Spaces in a String From a String Object
    string line;
    int vowels, consonants, digits, spaces;

    vowels =  consonants = digits = spaces = 0;

    cout << "Enter a line of string: ";
    getline(cin, line);

    for(int i = 0; i < line.length(); ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
        }
        else if (line[i]==' ')
        {
            ++spaces;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White spaces: " << spaces << endl;

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    //Example 1: Find Frequency of Characters of a String Object
    string str = "C++ Programming is awesome";
    char checkCharacter = 'a';
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count;

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;
int main()
{
   //Example 2: Find Frequency of Characters in a C-style String
   char c[] = "C++ programming is not easy.", check = 'm';
   int count = 0;

   for(int i = 0; c[i] != '\0'; ++i)
   {
       if(check == c[i])
           ++count;
   }
   cout << "Frequency of " << check <<  " = " << count;
   return 0;
}
