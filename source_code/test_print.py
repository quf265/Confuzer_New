import json

def parse_test_json(file_name):
    with open(file_name, "r") as json_file:
        data = json.load(json_file)

    for item in data:
        print("\"name\" | \"value\"")
        print("\"" + item["name"] + "\" | \"" + item["name"] + "\"")

        print("\n\"parameters\" | \"value\"")
        for param in item["parameters"]:
            print("\"" + param["name"] + "\" | \"" + param["type"] + "\"")

if __name__ == "__main__":
    parse_test_json("syscall.json")
