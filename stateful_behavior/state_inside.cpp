#include <iostream>
#include <string>

class State
{
  public:
	State(){};
	~State(){};
	virtual State* onEvent1_2() = 0;
	virtual State* onEvent2_3() = 0;
	virtual State* onEvent3_1() = 0;
	virtual void sayYourState() = 0;
};

class State1 : public State
{
  public:
	State1();
	~State1();
	State* onEvent1_2();
	State* onEvent2_3();
	State* onEvent3_1();
	void sayYourState();
};

class State2 : public State
{
  public:
	State2();
	~State2();
	State* onEvent1_2();
	State* onEvent2_3();
	State* onEvent3_1();
	void sayYourState();
};

class State3 : public State
{
  public:
	State3();
	~State3();
	State* onEvent1_2();
	State* onEvent2_3();
	State* onEvent3_1();
	void sayYourState();
};

class StateFul
{
  public:
	StateFul();
	~StateFul();
	void onEvent1_2();
	void onEvent2_3();
	void onEvent3_1();
	void sayYourState();

  private:
	State* state_;
};

State1 state1;
State2 state2;
State3 state3;

//================================================================================
State1::State1() : State(){}
State1::~State1(){}
State* State1::onEvent1_2(){ return &state2; }
State* State1::onEvent2_3(){ return &state1; }
State* State1::onEvent3_1(){ return &state1; }
void State1::sayYourState(){ std::cout << "I'm in state1" << std::endl; }

State2::State2() : State(){}
State2::~State2(){}
State* State2::onEvent1_2(){ return &state2; }
State* State2::onEvent2_3(){ return &state3; }
State* State2::onEvent3_1(){ return &state2; }
void State2::sayYourState(){ std::cout << "I'm in state2" << std::endl; }

State3::State3() : State(){}
State3::~State3(){}
State* State3::onEvent1_2(){ return &state3; }
State* State3::onEvent2_3(){ return &state3; }
State* State3::onEvent3_1(){ return &state1; }
void State3::sayYourState(){ std::cout << "I'm in state3" << std::endl; }

//================================================================================
StateFul::StateFul()
{
	state_ = &state1;
}

//--------------------------------------------------------------------------------
StateFul::~StateFul() {}

//--------------------------------------------------------------------------------
void StateFul::onEvent1_2()
{
	state_ = state_->onEvent1_2();
}
//--------------------------------------------------------------------------------
void StateFul::onEvent2_3()
{
	state_ = state_->onEvent2_3();
}
//--------------------------------------------------------------------------------
void StateFul::onEvent3_1()
{
	state_ = state_->onEvent3_1();
}
//--------------------------------------------------------------------------------
void StateFul::sayYourState()
{
	state_->sayYourState();
}
//================================================================================

int main(void)
{
	StateFul hoge;

	hoge.sayYourState();

	hoge.onEvent1_2();
	hoge.sayYourState();

	hoge.onEvent2_3();
	hoge.sayYourState();

	hoge.onEvent3_1();
	hoge.sayYourState();

	return 0;
}
