try:
    numerator=int(input("Enter number to Divide: "))
    denominator=int(input("Enter number to Divide by: "))
    ans=numerator/denominator
except ZeroDivisionError as e:
    print(e)
    print("You can't divide by zero")
except ValueError as e:
    print(e)
    print("Enter only numbers")
except Exception as e:
    print(e)
    print("Somthing went wrong")
else:
    print(ans)
finally:
    print("This will always execute")