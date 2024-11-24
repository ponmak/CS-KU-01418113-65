import os

# Number of files to create
n = int(input("Number of files to create: "))

# Directory to save the files
directory = 'CS-KU-01418113-65\lab\lab 01'

# Create files PB_01.py to PB_n.py
for i in range(1, n + 1):
    file_name = f"PB_{i:02}.c"
    file_path = os.path.join(directory, file_name)
    with open(file_path, 'w') as file:
        file.write(f"// {i:02}\n")

# List the files to confirm creation
os.listdir(directory)
