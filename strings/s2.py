def isPalindrome(s):
        if(s==s[::-1]):
            return 'palindrome'
        return 'not palindrome'
s=input('s')
print(isPalindrome(s))