import os

files = []
for file in os.listdir("."):
    if file.endswith(".cpp"):
        files.append(file)

os.system(f"g++ {' '.join(files)} `wx-config --cxxflags --libs` -v -o lab_dash")