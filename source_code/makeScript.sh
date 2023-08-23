#!/bin/sh

cp ./../execute_file/* .
make
mv *.o ./../execute_file/

echo "make complete"