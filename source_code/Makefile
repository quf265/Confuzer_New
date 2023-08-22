
header_file_path = ./../header_file/

main : systemcall.o execute.o print.o mapping.o main.o
		g++ systemcall.o print.o execute.o mapping.o main.o -o main

systemcall.o : $(header_file_path)Confuzer.h $(header_file_path)systemcall.h systemcall.cpp
			   g++ -c systemcall.cpp

execute.o : $(header_file_path)Confuzer.h $(header_file_path)execute.h execute.cpp
			   g++ -c execute.cpp

print.o : $(header_file_path)Confuzer.h $(header_file_path)print.h print.cpp
		  g++ -c print.cpp

mapping.o : $(header_file_path)Confuzer.h $(header_file_path)mapping.h mapping.cpp
		  g++ -c mapping.cpp

main.o : $(header_file_path)Confuzer.h main.cpp
		  g++ -c main.cpp


