
try:
    with open('text.tx') as file:
        print(file.read())
except FileNotFoundError:
    print("That file is not found")
# print(file.closed)