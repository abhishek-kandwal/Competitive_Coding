// recurcive solution to this problem.

#include <iostream>
#include <cstring>

using namespace std;

int SumVowelnConsonant(string s , int CurrentIndex){
    int greaterValue = 0;
    
    if(CurrentIndex >= s.length() -1 )
        return int(s[CurrentIndex]);
       
    int flag = -1; // vowel or consonant
    int i;
     
    for(i = CurrentIndex ; i < s.length() ; i++){
        int asciiVal = int(s[i]);
        if (flag == -1){
            if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'|| s[i] == 'U')
                flag = 0; // vowel
            else 
                flag = 1; // consonant
            greaterValue = asciiVal;
        }else {
            int newFlag = -1;
            
            if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'|| s[i] == 'U')
                newFlag = 0; // vowel
            else 
                newFlag = 1; // consonant
            
            if (flag != newFlag)
              break;   
                
            else{
                if ( greaterValue < asciiVal)
                    greaterValue = asciiVal;
            }
        }
    }
    
    return greaterValue + SumVowelnConsonant(s , i  ); ;
}   

int main()
{
    string s;
    cout<<"Enter the string to add vowel n consonant";
    cin >> s;
    cout << SumVowelnConsonant(s, 0);
    return 0;
}
