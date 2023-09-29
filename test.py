import os

def find_c_files(directory):
    c_files = []
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith(".c"):
                c_files.append(os.path.join(root, file))
    return c_files

main_directory = os.getcwd()

srcs_directory = os.path.join(main_directory, 'srcs')

if os.path.exists(srcs_directory):
    c_files = find_c_files(srcs_directory)

    if c_files:
        print("List of .c files in srcs/:")
        for file in c_files:
            relative_path = os.path.relpath(file, srcs_directory)
            print("srcs/" + relative_path)
    else:
        print("No .c files found in srcs/ directory and its subdirectories.")
else:
    print("The 'srcs' directory does not exist within the current working directory.")
