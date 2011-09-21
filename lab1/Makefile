CXX=g++
CXXFLAGS = -I"/usr/local/include/opencv" 
LINKFLAGS = -L"/usr/local/lib" -lopencv_core -lopencv_imgproc -lopencv_calib3d -lopencv_video -lopencv_features2d -lopencv_ml -lopencv_highgui -lopencv_objdetect -lopencv_contrib -lopencv_legacy

SAMPLES_C = $(notdir $(patsubst %.c, %, $(wildcard *.c)))
SAMPLES_CPP = $(notdir $(patsubst %.cpp, %, $(wildcard *.cpp)))

SAMPLES = $(SAMPLES_C) $(SAMPLES_CPP)

all: $(SAMPLES)

%: %.c
		@echo $@
			@$(CXX) $(CXXFLAGS) -o $@ $< $(LINKFLAGS)

%: %.cpp
		@echo $@
			@$(CXX) $(CXXFLAGS) -o $@ $< $(LINKFLAGS)

