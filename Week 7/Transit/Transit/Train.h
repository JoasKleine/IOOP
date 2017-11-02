#pragma once
class Train
{

protected: 
	float amountKM;
	float priceKM;
	float maxPas;
	float ticketPrice = 10;

public:

	void getData();

	virtual float Calculate() = 0;



	Train();
	~Train();
};

