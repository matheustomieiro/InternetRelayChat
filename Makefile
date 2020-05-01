all: run_servidor
	echo "Starting..."

run_servidor:

	g++	-o	bin/servidor	src/lista.c	src/socket_utils.cpp	src/servidor.cpp	-lpthread
	./bin/servidor

run_cliente:
	g++	-o	bin/cliente	src/lista.c	src/socket_utils.cpp	src/cliente.cpp	-lpthread
	./bin/cliente
	
  
clean:
	rm bin/*