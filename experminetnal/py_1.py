import os
file_name = "abc.txt"
with open(file_name, "w") as file:
    file.write('{"hello":"hii there"}')
print(f"File '{file_name}' created successfully.")