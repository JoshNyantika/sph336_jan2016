makeall: calc tempcalc test clean
	
	
calc: calc.cc calc.h
	g++ calc.cc -o calcbin
	
tempcalc: tempcalc.cc tempcalc.h
	g++ tempcalc.cc -o tempcalcbin
	
test: test.cc
	g++ test.cc -o testbin
	
clean:
	rm -f testbin
	rm -f calcbin
	rm -f *.o
	rm -f *~ 
