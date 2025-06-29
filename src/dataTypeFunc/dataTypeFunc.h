#pragma once 
#include "../dataType//dataTypes.h"

template<allowableDefault valueType>

extern unique_ptr<vector<valueType>> defaultVectorValues(
	unique_ptr<vector<valueType>> TargetVector,
	size_t amountOfValues,
	unique_ptr<valueType>(defaultValue));

extern neuron defaultNeuronValues(size_t amountOfPrevousValues, uint32_t defaultValues);