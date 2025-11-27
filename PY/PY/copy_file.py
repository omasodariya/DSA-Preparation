# copyfile() - copy content of file
# copy() -copyfile() + permission  mode + destination can be directory
# copy2() copy() + copy meta data (file creation and modification time) 

import shutil

shutil.copyfile('text.txt','copy.txt') #src,des