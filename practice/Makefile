DUT ?= UpDownCounter
TB ?= tb1


comp_tb:
	verilator TB/$(TB).sv --binary --assert
comp:
	verilator DUT/$(DUT).v --exe --trace TB/$(TB).sv --binary
clean:
	rm -rf *.vcd
	rm -rf obj_dir
