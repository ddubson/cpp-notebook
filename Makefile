CPP_STANDARD = c++11

run-hello-world:
	@echo "Compiling via clang++"
	@clang++ --std=$(CPP_STANDARD) src/main.cpp -o bin/hello-world
	@bin/hello-world

run-hello-world-g++:
	@echo "Compiling via G++"
	@g++ --std=$(CPP_STANDARD) src/main.cpp -o bin/hello-world
	@bin/hello-world

tidy:
	clang-tidy src/** -checks=cppcoreguidelines -header-filter=.*

debug-hello-world:
	lldb bin/hello-world

clean:
	rm bin/**

launch-docs:
	mkdocs serve

all: run-hello-world
