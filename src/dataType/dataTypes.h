#include <iostream>
#include <unordered_map>
#include "concepts"
#include <vector>
#pragma once
using namespace std;

extern struct neuron {
	vector<float> weightings;
	float value;
};

extern struct collum {
	vector<neuron> neuronsArray;
};

template<typename valueType>
concept allowableDefault = requires(valueType valueT) { { 
		typeid(valueT).name() == typeid(unique_ptr<int>).name() || 
		typeid(valueT).name() == typeid(unique_ptr<collum>).name() ||
		typeid(valueT).name() == typeid(unique_ptr<neuron>).name() ||
		typeid(valueT).name() == typeid(unique_ptr<float>).name()
	};
};