#ifndef VECTORS_H
#define VECTORS_H



double vector_length(double x, double y, double z);
double vector_add(double vectorA[],double vectorB[]);

// this part is the class

class Vectors
{
	public:
		Vectors();
	// use public functions to access private variables, 
	// https://www.w3schools.com/cpp/cpp_encapsulation.asp
	// https://www.youtube.com/watch?v=jTS7JTud1qQ&list=PLAE85DE8440AA6B83&index=13
		void setVector1();
		int printVector1();

		void setVector2();
		int printVector2();

		void 	addVectors();
		int	printVectorSum();

		double vector1_length();
		double getVector1Length();

	protected:
	private:
		double 	vector1[3][1];
		double 	vector2[3][1];
		double	vectorSum[3][1];
		double	vectorLength;

};
#endif
