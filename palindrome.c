#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int low = 0;
    int high = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (low < high) {
        if (str[low] != str[high]) {
            return 0; // not a palindrome.
        }
        low++; // move the low index forward
        high--; // move the high index backwards
    }
    return 1; // is a palindrome
}

void palindrome() {
    char str[] = "abbba";
    char str1[] = "abcded";
    
    printf("%s is palindrome %d\n", str, isPalindrome(str));
    printf("%s is palindrome %d\n", str1, isPalindrome(str1));
    
   // return 0;
}

