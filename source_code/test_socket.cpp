#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h> 
#include <unistd.h> 
#include <string.h> 
#define MAX_BUFFER_SIZE 1024

int main() {
    int sock = 0, valread; 
    struct sockaddr_in serv_addr; 
    char buffer[MAX_BUFFER_SIZE] = {0}; 
    
    // Create socket 
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) { 
        std::cout << "Socket creation error.\n"; 
        return -1; 
    } 

    serv_addr.sin_family = AF_INET; 
    serv_addr.sin_port = htons(12345); 

    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) { 
        std::cout << "Invalid address/ Address not supported.\n"; 
        return -1; 
    } 

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) { 
        std::cout << "Connection failed.\n";
        return -1; 
    }

    // Receive data from server 
    valread = read(sock, buffer, MAX_BUFFER_SIZE);
    std::cout << buffer << std::endl;

    // Close socket 
    close(sock); 

    return 0; 
}
