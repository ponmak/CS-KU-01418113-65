import os

# Number of files to create
n = int(input("Number of files to create: "))

# Directory to save the files
directory = 'lab\lab 10'

# Create files PB_01.py to PB_n.py
for i in range(1, n + 1):
    file_name = f"PB_{i:02}.cpp"
    file_path = os.path.join(directory, file_name)
    with open(file_path, 'w') as file:
        file.write(f"// {i:02}\n\n")
        file.write("#include <iostream>\n#include <vector>\n\nusing namespace std;\n\n")
        file.write("int main() {\n")
        file.write("\n")
        file.write("    return 0;\n")
        file.write("}\n")

# List the files to confirm creation
os.listdir(directory)
