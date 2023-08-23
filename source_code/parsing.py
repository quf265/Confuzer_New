import json

# Open the file and load the data
with open('syscall.json', 'r') as f:
    data = json.load(f)

# Open a new text file to write the results to
with open('par_test.txt', 'w') as f:
    # Loop through each item in the list of dictionaries
    for i in range(len(data)):
        # Write each dictionary's contents to par_test.txt 
        name = data[i]['name']
        
        if "parameters" in data[i]:
            parameters = ', '.join([f"{param['name']}: {param['type']}" for param in data[i]['parameters']])
            
            f.write(f"Name: {name}, Parameters: [{parameters}]")
