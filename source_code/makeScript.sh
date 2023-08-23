#!/bin/sh

mv ./../execute_file/* .
make
mv *.o ./../execute_file/

echo "make complete"