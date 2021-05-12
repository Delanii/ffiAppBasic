sourceC = src/C/main.c

finalProgram = myFullApp

release:
	gcc -o ${finalProgram} ${sourceC}

.PHONY purge:
	rm -rf ${finalProgram}
