CC = gcc
DEBUG = -g
CFLAGS = -O3 -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
N=
File= 
MAKE= make 
MODULES = test

# compile the files and obtain an executable

nqueen : nq.o
	$(CC) -pg $(LFLAGS)  ../OLayanRawan-NQueen-SSE/src/nq.o -o ../OLayanRawan-NQueen-SSE/src/nqueen
	@echo "QQQQ Hello player: in order to use this program and for further information, please type : make rdme"
 
nq.o: ../OLayanRawan-NQueen-SSE/src/nq.c
	$(CC) -o ../OLayanRawan-NQueen-SSE/src/nq.o -pg $(CFLAGS) ../OLayanRawan-NQueen-SSE/src/nq.c 

run:
	../OLayanRawan-NQueen-SSE/src/./nqueen ${N}  
	@echo ""	
	@echo "QQQQ if you want to save the terminal output in a file :"
	@echo "please type : make run N=10 >  ../OLayanRawan-NQueen-SSE/solutions-output/yourOutputFileName.txt"
	@echo "then followed by gedit yourOutputFileName.txt --- or you can open solutions-output folder "
	@echo ""
	@echo "QQQQ if you want to test the correcness of files containing solutions for each trial :"
	@echo "please type : make run N=10 >  ../OLayanRawan-NQueen-SSE/test/solutions-output/yourOutputFileName.txt"
	@echo "this saves the solution output in ../OLayanRawan-NQueen-SSE/test/solutions-output for further verfication "
	@echo "QQQQ if you want to start unit-testing of the solution output , please type : make all"
	@echo ""
	@echo "QQQQ in case of error or having more information , please type : make rdme or open readme file"
	@echo ""

run2 : 	
	../OLayanRawan-NQueen-SSE/src/./nqueen ${N} > ../OLayanRawan-NQueen-SSE/solutions-output/SolutionsResults.txt ;cd ../OLayanRawan-NQueen-SSE/solutions-output; gedit SolutionsResults.txt 
	@echo "QQQQ the opened file is auto-saved with the name SolutionsResults.txt "	
	@echo "QQQQ if you want to have many files containing solutions for each trial: please type make run N=board-size"	
	@echo "QQQQ in case of error or having more information , please type : make rdme or open readme file"

#test:
#	cd ../N-Queen-Test/test; {MAKE}

all:
	for dir in $(MODULES); do \
	(cd $$dir; ${MAKE};${MAKE}runtest); \
	done

	
profilation: 
	$(CC) -pg -o ../OLayanRawan-NQueen-SSE/profl/profltargetinfo ../OLayanRawan-NQueen-SSE/src/nq.o ; ../OLayanRawan-NQueen-SSE/profl/./profltargetinfo ; gprof ../OLayanRawan-NQueen-SSE/profl/profltargetinfo > ../OLayanRawan-NQueen-SSE/profl/profltargetinfo.dat ;cd ../OLayanRawan-NQueen-SSE/profl; gedit profltargetinfo.dat


rdme: 
	@echo "QQQQ This program calculates the total number of solutions to the N Queens problem"
	@echo "QQQQ For further inforamtion about Terminal Usage, Please type: gedit readme or your-text-editor readme"


.PHONY : clean

clean :
	rm -rf *o *~ *out ../OLayanRawan-NQueen-SSE/src/nqueen
 

