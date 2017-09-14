/*
* Test.cpp
*/ 

#include "AudioFile.h"

int main(int argc, char* argv[]){
	if (argc != 2){ 
		printf("usage: Test test.wav\n"); 
		return 0; 
	}
    AudioFile<double> audioFile;
    audioFile.load(argv[1]);
    audioFile.printSummary();

    int channel = 0;
    int numSamples = audioFile.getNumSamplesPerChannel();

    /* for (int i = 0; i < numSamples; i++)
    {
	    double currentSample = audioFile.samples[channel][i];
        printf ("Current Sample: %f ", currentSample);
    }*/

	return 0;
}

