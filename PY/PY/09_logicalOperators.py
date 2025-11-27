temp=int(input("What is tempreture today? "))

if not(temp>=0 and temp<=30):
    print("Temperature is severe!")
    print("You can't go outside")
elif not(temp<0 or temp>30) :   
    print("Temperature is moderate!")
    print("You can go outside")


