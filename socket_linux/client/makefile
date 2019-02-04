cc = gcc
prom = test
CFLAGS = -pedantic -Wall -Wextra -Wfloat-equal -std=c99 -O2
deps = $(shell find ./ -name "*.h")
src = $(shell find ./ -name "*.c")
obj = $(src:%.c=%.o) 

$(prom): $(obj)
	$(cc) -o $(prom) $(obj)

%.o: %.c $(deps) $(CFLAGS)
	$(cc) -c $< -o $@
clean_o:
	rm -rf $(obj)
clean:
	rm -rf $(obj) $(prom)
