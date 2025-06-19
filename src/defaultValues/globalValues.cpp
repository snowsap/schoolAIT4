#include "globalValues.h"

constexpr extern neuron defaultNeuron() {
	neuron defNeuron;
	defNeuron.value = 0;
	defaultUnordedMapValues(std::move(std::make_unique<auto>(defNeuron.weightings)), 0, 100);
	
	
	return;
}