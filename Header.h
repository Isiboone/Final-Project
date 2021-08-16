#pragma once
#include <string>
#include <iostream>
//For cout, string
using namespace std;

//This is for the function prototypes and declaration
void change(int* x, int* y);
void Introduction1();
void Introduction2();
void SceneTracker(int scene);
void dead();
void questions();
void PuffPrint(string phrase);
int Nextscene(int scene);
string GetUserInput();
//This is the main class
class PufferFish {
public:
	virtual string getType() = 0;
	virtual string getSize() = 0;
	virtual int getCost() = 0;
};
//This child class for peapuff
class PeaPuff: public PufferFish {
private:
	int cost = 3;

public:
	string getType() {
		return "Pea Puffer Fish";
	}

	string getSize() {
		return "small";
	}

	int getCost() {
		return cost;
	}
};
//This is figurepuff class
class FigurePuff: public PufferFish {
private:
	int cost = 5;

public:
	string getType() {
		return "Figure 8 Puffer Fish";
	}
	string getSize() {
		return "Large";
	}
	int getCost() {
		return cost;
	}
};