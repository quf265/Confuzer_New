
header_file_path = ./../header_file/
systemcall_info_file_path = ./../systemcall_info/

main : flagInfo.o structInfo.o initialize.o systemcall.o execute.o print.o mapping.o  main.o
		g++ systemcall.o print.o initialize.o execute.o mapping.o flagInfo.o structInfo.o main.o -o main

flagInfo.o : $(header_file_path)Confuzer.h $(header_file_path)flagInfo.h $(systemcall_info_file_path)flagInfo.cpp
		  g++ -c $(systemcall_info_file_path)flagInfo.cpp

structInfo.o : $(header_file_path)Confuzer.h $(header_file_path)structInfo.h $(systemcall_info_file_path)structInfo.cpp
		  g++ -c $(systemcall_info_file_path)structInfo.cpp

initialize.o : $(header_file_path)Confuzer.h $(header_file_path)flagInfo.h $(header_file_path)structInfo.h $(header_file_path)initialize.h initialize.cpp
		  g++ -c initialize.cpp

systemcall.o : $(header_file_path)Confuzer.h $(header_file_path)flagInfo.h $(header_file_path)structInfo.h $(header_file_path)systemcall.h systemcall.cpp
			   g++ -c systemcall.cpp

execute.o : $(header_file_path)Confuzer.h $(header_file_path)flagInfo.h $(header_file_path)structInfo.h $(header_file_path)execute.h execute.cpp
			   g++ -c execute.cpp

print.o : $(header_file_path)Confuzer.h $(header_file_path)flagInfo.h $(header_file_path)structInfo.h $(header_file_path)print.h print.cpp
		  g++ -c print.cpp

mapping.o : $(header_file_path)Confuzer.h $(header_file_path)flagInfo.h $(header_file_path)structInfo.h $(header_file_path)mapping.h mapping.cpp
		  g++ -c mapping.cpp




main.o : $(header_file_path)Confuzer.h main.cpp
		  g++ -c main.cpp


