def reverseWords(str):
    split_str=str.split()
    str=' '.join(reversed(split_str))
    return str
str=input("string")
print(reverseWords(str))