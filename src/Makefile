# Makefile

# Build the AGL library
release: graphics.cpp graphics.h
	g++ -fPIC -O3 -c graphics.cpp
	g++ -shared -O3 -o ../lib/libagl-graphics.so graphics.o -lSDL -lagl

# Build the AGL library for debugging
debug: graphics.cpp graphics.h
	g++ -fPIC -g -c graphics.cpp
	g++ -shared -g -o ../lib/libagl-graphics.so graphics.o -lSDL -lagl

# Build the test application
test: test.cpp
	g++ -g -o test test.cpp ../lib/libagl-graphics.so -lagl -fpermissive

# Install the AGL library on the system
install:
	../install.sh

# Uninstall the AGL library to the system
remove:
	../remove.sh

# Generates the AGL documentation
doc:
	doxygen doxyfile

# Cleans the directories, removing executables and objects
clean:
	rm *.o test ../lib/*.so
