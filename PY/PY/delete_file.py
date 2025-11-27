import os
import shutil

path="text.txt"
path="File"

try:
    # os.remove(path) # deletes a file
    # os.rmdir(path)    # deletes empty directory
    shutil.rmtree(path) # delete derectory containing files
except FileNotFoundError:
    print("That file was not found")
except PermissionError:
    print("You do not have permission to delete that")
except OSError:
    print("You can not delete that function")
else:
    print(path+" was deleated")
