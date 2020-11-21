CPP_STANDARD = c++11
BIN_FILE=hello-world

run-hello-world:
	@echo "Compiling via clang++"
	clang++ --std=$(CPP_STANDARD) src/main.cpp -o bin/$(BIN_FILE)
	bin/$(BIN_FILE)

run-hello-world-g++:
	@echo "Compiling via G++"
	g++ --std=$(CPP_STANDARD) src/main.cpp -o bin/$(BIN_FILE)
	bin/$(BIN_FILE)

tidy:
	clang-tidy src/** -checks=cppcoreguidelines -header-filter=.*

debug-hello-world:
	lldb bin/hello-world

clean:
	rm bin/**

launch-docs:
	mkdocs serve

all: run-hello-world

install-on-win:
	@pip3 install mkdocs
	@scoop install llvm