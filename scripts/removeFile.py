import os;

username = os.getlogin();
folder_path =f"C:/Users/{username}/.vscode/languge_lab/";
cache_file = f"C:/Users/{username}/.vscode/languge_lab/scripts/cachefile.txt"
deleted_file_list = ["\n***** >> list of deleted files from python << *****\n\n"]


def checkAllFile(dirPath):
    try:
        for i in os.listdir(dirPath):
           if i != "javascript":
                if(i.endswith(".exe") or i.endswith(".class")):
                     print("ok got it" , os.path.join(dirPath , i))
                     deleted_file_list.append(i)
                     os.unlink(os.path.join(dirPath , i))
                     with open(cache_file , 'w') as fs:
                         fs.write("\n>> ".join(deleted_file_list))
                checkAllFile(os.path.join(dirPath , i))
    except NotADirectoryError as error:
        return;
        # print("error : " , error)

        
checkAllFile(folder_path)
print("operation done")