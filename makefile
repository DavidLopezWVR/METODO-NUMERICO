
bin/simpson13.exe : src/main.cpp include/*.hpp
	@echo Compilando codigo fuente.....
	g++ -o bin/simpson13 src/main.cpp -Iinclude

run : bin/simpson13.exe
	./bin/simpson13.exe
clean : bin/simpson13.exe
	rm -f ./bin/*.exe
