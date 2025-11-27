
rows=int(input("How many rows? "))
column=int(input("How many columns? "))
symbol=input("Which symbol you like: ")

for i in range(rows):
    for j in range(column):
        print(symbol,end=" ")
    print()
