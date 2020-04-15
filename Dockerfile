FROM ubuntu
RUN apt-get update -y
RUN apt-get upgrade -y
RUN apt-get install -y build-essential
RUN apt-get install -y gdb
COPY lab3_both.cpp /home/lab3_both.cpp

