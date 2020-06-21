#include <iostream>
#include <cstring>

using namespace std;

int SumVowelnConsonant(string s , int i){
    
    if(i >= s.length() - 1 )
        return int(s[i]);
       
    int greaterValue = 0;
    int flag = -1; // vowel or consonant
     
    for(i ; i < s.length() ; i++){
        
        int asciiVal = int(s[i]);
        int inFlag = -1;
        
        if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'|| s[i] == 'U')
                inFlag = 0; // vowel
            else 
                inFlag = 1; // consonant
                
        if (flag == -1){
            flag = inFlag;
            greaterValue = asciiVal;
        }else {
            if (flag != inFlag)
              break; 
            else if ( greaterValue < asciiVal )
                    greaterValue = asciiVal;
        }
    }
    
    return greaterValue + SumVowelnConsonant(s , i); ;
}   

int main()
{
    string s;
    cout<<"Enter the string to add vowel n consonant";
    cin >> s;
    cout << SumVowelnConsonant(s, 0); // s-> input string , 0 -> starting index
    return 0;
}
