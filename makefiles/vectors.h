#ifndef VECTORS_H
#define VECTORS_H

class Vectors
{
	public:
	// constructor	
	Vectors();
	
	// destructor
	~Vectors();	

	int printVector1();
	int printVector2();	
	void setVector1();
	void setVector2();


	int printAddedVectors();
	void addVectors();

	double vector_length(double x, double y, double z);

	protected:
	private:

	double vector1[3][1];
	double vector2[3][1];
	double vector_add_result[3][1];
};

#endif
