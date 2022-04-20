str_file = "./test.cc"
with open(str_file) as f:
    lines = f.readlines()
    for line in lines:
        line = line.rstrip()
        s = f"\"{line}\","
        print(s)
    
