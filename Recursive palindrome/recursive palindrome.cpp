#include <iostream>
#include <cstring>

using namespace std;

bool checkPalindromeRecursive(string str, int firstIndex , int lastIndex){
    if (str.length() == 1)
        return true;
    
    if (firstIndex >= lastIndex)
        return true;
    
    if (str[firstIndex] != str[lastIndex])
        return false;
    
    return checkPalindromeRecursive(str , firstIndex + 1, lastIndex -1);
}

bool isPerm(string str){
    return checkPalindromeRecursive(str , 0 , str.length() - 1);
}
int main() {
    string str;
    std::cout<<"Enter any string to check for permutation";
    std::cin >> str;
    if(isPerm(str))
        std::cout << "is a palindrome";
    else 
        std::cout << "not a palindrome";
    return 0;
}