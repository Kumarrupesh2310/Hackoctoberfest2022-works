#include <iostream>
using namespace std;

    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
       
        if (n == 1) return "";
        
              for (int i = 0; i < n / 2; i++) {
            //  here we know that as long as palindrome[i] is not "a", we skip it
            if (palindrome[i] != 'a') {
                // otherwise, we replace the first character that is not "a"
                palindrome[i] = 'a';
                // replaced -> we can return the result here
                return palindrome;
            }
        }
        palindrome[n - 1] = 'b';
        return palindrome;
    }

int main(){
    string s;
    cin>>s;
    string ans= breakPalindrome(s);
    cout<<ans<<endl;
}