# name=""    
# while len(name)==0:
#     name=input("Enter your name:")

# print("Hello "+name)

# Initialize an empty dictionary
user_dict = {}

# Get the number of key-value pairs from the user
num_pairs = int(input("Enter the number of key-value pairs: "))

# Loop to get key-value pairs from the user
for _ in range(num_pairs):
    key = input("Enter key: ")
    value = input("Enter value: ")
    user_dict[key] = value

# Print the resulting dictionary
print("Dictionary created with user input:", user_dict)
