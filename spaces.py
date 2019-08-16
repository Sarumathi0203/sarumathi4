string = input('Enter the string:')
k=0
with open(string, 'r') as f:
    for line in f:
        words=line.spilt()
        for i in words:
            for letter in i:
                if(letter.isspace):
                   k=k+1
print("number of blank spaces are:")
print(k)
