run-hello-world:
	@echo "Compiling via clang++"
	@clang++ src/main.cpp -o bin/hello-world
	@bin/hello-world

run-hello-world-g++:
	@echo "Compiling via G++"
	@g++ src/main.cpp -o bin/hello-world
	@bin/hello-world

debug-hello-world:
	lldb bin/hello-world

clean:
	rm bin/**

launch-docs:
	mkdocs serve

all: run-hello-world