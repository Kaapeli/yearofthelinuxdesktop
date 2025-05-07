all: yearofthelinuxdesktop

$(TARGET): yearofthelinuxdesktop.cpp
	g++ -std=c++17 -Wall -O2 -o yearofthelinuxdesktop yearofthelinuxdesktop.cpp

clean:
	rm -f yearofthelinuxdesktop
