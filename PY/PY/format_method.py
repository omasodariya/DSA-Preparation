# std.format

animal ="cow"
item="moon"

# print("The "+animal+" jumped over the "+item)
# print("The {} jumped over the {}".format("cow","moon"))
# print("The {} jumped over the {}".format(item,animal)) 
# print("The {1} jumped over the {1}".format(animal,item)) #positional argument
# print("The {animal} jumped over the {animal}".format(animal="cow",item="moon")) #keyword argument

# text="The {} jumped over the {}"
# print(text.format(animal,item))


# name="Bro"
# print("Hello, My name is {}".format(name))
# print("Hello, My name is {:10}. Nice to meet you".format(name))
# print("Hello, My name is {:>10}. Nice to meet you".format(name))
# print("Hello, My name is {:<10}. Nice to meet you".format(name))
# print("Hello, My name is {:^10}. Nice to meet you".format(name))

num=3.14459
num=1000

print("The number pi is {:.2f}".format(num))
print("The number is {:,}".format(num))
print("The number is {:b}".format(num))
print("The number is {:o}".format(num))
print("The number is {:x}".format(num))
print("The number is {:e}".format(num))