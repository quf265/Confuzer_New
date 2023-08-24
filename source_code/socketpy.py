import socket
import json

# Open the file and load the data
with open('syscall.json', 'r') as f:
    data = json.load(f)

# Create a TCP/IP socket 
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_address = ('localhost', 12345)
sock.bind(server_address)

print("Starting up on %s port %s" % server_address)
sock.listen(1)

while True:
    print("Waiting for a connection")
    connection, client_address = sock.accept()

try:
        print("Connection from", client_address)

        # Loop through each item in the list of dictionaries and send it to client (C++)
        for i in range(len(data)):
            name = data[i]['name']
            
            if "parameters" in data[i]:
                parameters = ', '.join([f"{param['name']}: {param['type']}" for param in data[i]['parameters']])
                
                message_to_send= f"Name: {name} , Parameters: [{parameters}]"
                connection.sendall(message_to_send.encode())
finally:
        # Clean up the connection
        connection.close()
