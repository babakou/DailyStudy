compile_option_enable_debug = -g
compile_option_enable_coverage = -fprofile-arcs -ftest-coverage
linker_option_enable_coverage = -p -fprofile-arcs

main.exe: main.c fuga.dll hoge.dll
	gcc -L. $< -o $@ -lfuga -lhoge

fuga.dll: fuga.o
	g++ -shared $(linker_option_enable_coverage) -o $@ $<
	#g++ -shared -o $@ $<

fuga.o: fuga.cpp fuga.hpp
	g++ -c -fpic $(compile_option_enable_debug) $(compile_option_enable_coverage) $<
	#g++ -c -fpic $<

hoge.dll: hoge.o
	g++ -shared $(linker_option_enable_coverage) -o $@ $<
	#g++ -shared -o $@ $<

hoge.o: hoge.cpp hoge.hpp
	g++ -c -fpic $(compile_option_enable_debug) $(compile_option_enable_coverage) $<

.PHONY: clean
clean:
	rm *.o *.dll *.exe *.gcno *.gcda *.gcov

.PHONY: lcov
lcov:
	lcov -c -d . -o cov.info
	genhtml cov.info -o cov_html