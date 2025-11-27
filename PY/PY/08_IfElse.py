age=int(input("How old are you? "))

if age>=18:
    print("You are an Adult")
elif age>=14:    
    print("You are a teenager")
elif age<0:    
    print("You haven't been born yet")
else :   
    print("You are a child")