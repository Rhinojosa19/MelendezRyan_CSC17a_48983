#pragma once
class OutInfo
{
public:
	          OutInfo();
	virtual  ~OutInfo();
	void     setMiss(int);
	void     setHit(int);
	int      getMiss();
	int      gethit();

	OutInfo operator+=(const OutInfo& t);
	OutInfo operator-=(const OutInfo& t);

private:
	int missCount = 0;
	int hitCount = 0;

};

