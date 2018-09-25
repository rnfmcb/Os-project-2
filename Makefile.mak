CC = gcc
CFLAGS = -g
TARGET = ass2
OBJS = master.o worker.o
$(TARGET): $(OBJS)
$(CC) -o $(TARGET) $(OBJS)
master.o: master.c
$(CC) $(CFLAGS) -c master.c
worker.o: worker.c
$(CC) $(CFLAGS) -c worker.c
clean:
/bin/rm -f *.o $(TARGET)