CC = gcc
CFLAGS = -Wall -Wextra
TARGET = process_monitor
SOURCES = process_monitor.C

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

.PHONY: clean