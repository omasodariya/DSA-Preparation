import os

# source="text.txt"
# destination="C:\\Users\\Om\\Desktop\\PY\\FILE\\text1.txt"

source="folder"
destination="C:\\Users\\Om\\Desktop\\PY\\FILE\\folder"

try:
    if(os.path.exists(destination)):
        print("There is already file there")
    else:
        os.replace(source,destination)
        print(source+" was moved")
except FileNotFoundError:
    print(source+" was not found")