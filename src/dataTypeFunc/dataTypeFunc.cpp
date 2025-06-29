#include "dataTypeFunc.h"


template<allowableDefault valueType> 

extern unique_ptr<vector<valueType>> defaultVectorValues(
	unique_ptr<vector<valueType>> TargetVector, 
	size_t amountOfValues,
	unique_ptr<valueType> (defaultValue)) {

	size_t defSize = sizeof(defaultValue);
	TargetVector->resize(amountOfValues);


	try {

		for (auto i = TargetVector->rbegin(); i < TargetVector->rend(); ++i) {
			memcpy(&i, &defaultValue, defSize);
		}

		return move(TargetVector);
	
	}

	catch (const exception& error) {

		cerr << "Error in assigning defaultValue to the map" << endl
		<< "At Index: " << i << endl
		<< "Value Type: " << typeid(valueType).name() << endl
		<< "MaxSizeOfMap: " << TargetVector->max_size() << endl
		<< "AmountOfElements: " << TargetVector->size() << endl
		<< "Actual Error: " << error.what() << endl;
		
		return move(TargetVector);
	
	}

};

extern neuron defaultNeuronValues(size_t amountOfPrevousValues, float defaultValue) {
	
	int i;
	neuron targetNeuron;
	targetNeuron.value = 0.0f;

	
	try {

		for (i = 0; i < defaultValue; ++i) {

			defaultVectorValues<float>(move(make_unique<vector<float>>(targetNeuron)), amountOfPrevousValues, std::move(make_unique<float>(defaultValue)));

		}
	}
	catch (const exception& error) {

		cerr << "Error in assigning default neuron values" << endl
			<< "At Index: " << i << endl
			<< "Actual Error: " << error.what() << endl;

	}
	return targetNeuron;
}