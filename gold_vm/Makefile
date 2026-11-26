
.PHONY: clean

all: gold_vm

gold_vm: minirisc.c
	gcc -W -Wall -O2 $< -o $@

clean:
	@rm -vf gold_vm

