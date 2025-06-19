#include "condAI.h"

condAI::condAI(uint64_t numOfLayers, uint64_t depthOfLayers, uint64_t depthOfInputLayers, uint64_t DepthOfOutput) {

	this->allNeurons.resize(numOfLayers);

	auto allNeuronsPtr = std::make_unique<std::vector<collum>>(this->allNeurons);

	neuron defaultNeuron = defaultNeuronValues(depthOfInputLayers, 0);

	collum firstCollum;
	collum lastCollum;
	collum secretLayer;

	auto firstCollumPTR = std::make_unique<std::vector<neuron>>(firstCollum);
	auto lastcollumPTR = std::make_unique<std::vector<neuron>>(lastCollum);
	auto secretLayerPTR = std::make_unique<std::vector<neuron>>(secretLayer);

	firstCollumPTR = defaultVectorValues<neuron>(std::move(firstCollumPTR), static_cast<size_t>(depthOfInputLayers), std::move(std::make_unique<neuron>(defaultNeuron)));
	lastcollumPTR = defaultVectorValues<neuron>(std::move(lastcollumPTR), static_cast<size_t>(depthOfLayers), std::move(std::make_unique<neuron>(defaultNeuron)));
	secretLayerPTR = defaultVectorValues<neuron>(std::move(secretLayerPTR), static_cast<size_t>(DepthOfOutput), std::move(std::make_unique<neuron>(defaultNeuron)));

	this->allNeurons[0] = firstCollum;
	this->allNeurons[-1] = lastCollum;

	size_t sizeOfSecLayers = sizeof(secretLayer);
	size_t amountOfSecLayers = numOfLayers - 1;

	for (size_t i = 1; i < amountOfSecLayers; ++i) {
		memcpy(&i, &secretLayer, sizeOfSecLayers);
	}



}
