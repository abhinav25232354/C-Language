user = int(input("Enter a Number: "))
print(list(str(user)))

sum = 0
for i in list(str(user)):
    sum += int(i)
print(sum)

# reverse print
print(list(str(user)).reversed)