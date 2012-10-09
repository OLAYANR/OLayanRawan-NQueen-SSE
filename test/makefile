CC = g++
DEBUG = -g
CFLAGS = -O3 -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
N=
File= 


# compile the files and obtain an executable

nqueencheckUnittest : NQueensTest.o
	$(CC) -pg $(LFLAGS)  NQueensTest.o -o nqueencheckUnittest
 
NQueensTest.o: N-Queens-Test.cpp
	$(CC) -o NQueensTest.o -pg $(CFLAGS) N-Queens-Test.cpp 

runtest : 	
	./nqueencheckUnittest 
	
profilation: 
	$(CC) -pg -o profltargetinfo NQueensTest.o ; ./profltargetinfo ; gprof profltargetinfo > profltargetinfo.dat;gedit profltargetinfo.dat

rdme: 
	@echo "This program tests the correctness of solutions output to the N Queens problem"
	@echo "For further inforamtion about this testing process, Please type : make rdme  "

.PHONY : clean

clean :
	rm -rf *o *~ *out *dat nqueencheckUnittest profltargetinfo
#cd $(EXE-path) rm nqueen #cd $(PROFL-Path) rm *dat *out #cd $(OBJS-path) rm *o  #cd $(ETC-path) rm 

