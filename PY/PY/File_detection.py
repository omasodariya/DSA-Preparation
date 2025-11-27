import os

path="C:\\Users\\Om\\Desktop\\PY\\FILE"

if os.path.exists(path):
    print("Path dose exists")
    if os.path.isfile(path):
        print("That is a file")
    elif os.path.isdir(path):
        print("That is a directory")

else:
    print("That does not exists")