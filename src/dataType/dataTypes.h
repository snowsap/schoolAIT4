#include "iostream"
#include "unordered_map"
#include "concepts"
#pragma once

extern struct neuron {
	std::vector<float> weightings;
	float value;
};

extern struct collum {
	std::vector<neuron> neuronsArray;
};

template<typename valueType>
concept allowableDefault = requires(valueType valueT) { { 
		typeid(valueT).name() == typeid(int).name() || 
		typeid(valueT).name() == typeid(collum).name() ||
		typeid(valueT).name() == typeid(float).name()
	};
};