#include "condAI.h"

condAI::condAI(uint64_t numOfLayers, uint64_t depthOfLayers, uint64_t DepthOfInputLayers, uint64_t DepthOfOutput) {

	this->allNeurons.reserve(numOfLayers);

	auto allNeuronsPtr = std::make_unique<std::vector<int, collum>>(this->allNeurons);
	auto defaultWeightingsPTR = std::make_unique<std::vector<int, float>,


	neuron defaultNeuron = { defaultVector(std::move(), , 0};
	collum defaultCollumValue = std::make_unique<int, neuron>();

	defaultVector(std::move(allNeuronsPtr), collum(), 1, numOfLayers - 1);
	defaultVector(std::move(allNeuronsPtr), collum(), 1, numOfLayers - 1);
	defaultVector(std::move(allNeuronsPtr), collum(), 1, numOfLayers - 1);
	defaultVector(std::move(allNeuronsPtr), collum(), 1, numOfLayers - 1);

}
