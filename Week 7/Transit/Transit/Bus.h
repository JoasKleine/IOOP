#pragma once
class Bus
{

protected:
	float amountKM;
	float priceKM;
	float maxPas;
	float ticketPrice = 5;

public:

	void getData();

	virtual float Calculate() = 0;



	Bus();
	~Bus();
};

