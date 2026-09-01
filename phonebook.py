# Replica of a phonebook

def find(name):
    if name in phonebook:
        print(f"Person Found\nContact no. {phonebook[name]}")
    else:
        print("Person Not Found")

phonebook = {
    "john": "+1-212-32323",
    "william": "+1-212-323433",
    "robert": "+1-212-32367",
}

# print(phonebook["John"])
# user_input = input("Find Someone: ")
# find(user_input)




def factorial(number):
    fac = 1
    for i in range(number, 1):
        fac *= i
    print(f"Factorial: {number}")

factorial(5)