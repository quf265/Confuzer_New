#include "./../header_file/initialize.h"
<<<<<<< HEAD
#include <iostream>
#include <string>
// #include <boost/asio.hpp>

// using boost::asio::ip::tcp;

// int main() {
// 	boost::asio::io_service io_service;
// 	tcp::resolver resolver(io_service);
// 	tcp_socket s(io_service);

// 	try{
// 		s.connect(tcp_endpoint(boost_asio_ipaddress_make_from_string("127.0.0.1"), 12345));
// 	}
// 	catch(std_exception& e){
// 		std_cout << "Error occured! Error code =" << e.what();
// 	return -1;
//    }

// 	char reply[1024];
// 	size_t reply_length =
// 			read(s,
// 				buffer(reply),
// 				error);
		
// 	std:string str_reply(reply);	
// 	std:cout << str_reply << std:end;

// 	return 0;
// }
=======
>>>>>>> c5191b73e268777e25fd5d48948e6851064249f8

Initialize::Initialize(/* args */)
{
}

Initialize::~Initialize()
{
}

void Initialize::first_function()
{
    cout<<"hello initialize class"<<endl;
    cout<<"hello";
}
