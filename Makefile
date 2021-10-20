.PHONY: build clean remake out

all: build
    
build: 
		mos build --clean --local --verbose --platform=esp32

clean:
		rm -rf build deps

remake: clean build

