# kwargs -> into dictionary

# def hello(first,last):
#     print("Hello "+first+" "+last)

def hello(**names):
    # print("Hello "+kwargs['first']+" "+kwargs['last'])
    print("Hello",end=" ")
    for key,value in names.items():
        print(value,end=" ")


# hello(first="Om",last="Bro")
hello(title="Mr.",first="Om",middle="patel",last="Bro")