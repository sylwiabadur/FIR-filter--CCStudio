/////*
//// * main.c
//// */
////
//int out_tab[1024];
//int coeffs[243] = {0,0,0,0,0,0,1,1,1,0,-1,-1,-2,-1,0,1,2,3,3,1,-1,-3,-5,-5,-3,0,4,7,8,6,2,-4,-9,-12,-11,-5,3,12,17,17,11,0,-13,-22,-25,-19,-6,12,27,35,31,15,-8,-31,-45,-45,-28,0,32,55,62,47,14,-28,-64,-81,-71,-34,18,70,101,100,63,0,-69,-121,-134,-102,-29,60,137,173,150,73,-39,-147,-214,-211,-133,-0,146,256,285,216,63,-129,-296,-376,-330,-161,87,333,492,493,317,0,-365,-655,-754,-593,-179,389,944,1283,1224,659,-404,-1836,-3402,-4813,-5793,26624,-5793,-4813,-3402,-1836,-404,659,1224,1283,944,389,-179,-593,-754,-655,-365,0,317,493,492,333,87,-161,-330,-376,-296,-129,63,216,285,256,146,0,-133,-211,-214,-147,-39,73,150,173,137,60,-29,-102,-134,-121,-69,0,63,100,101,70,18,-34,-71,-81,-64,-28,14,47,62,55,32,0,-28,-45,-45,-31,-8,15,31,35,27,12,-6,-19,-25,-22,-13,0,11,17,17,12,3,-5,-11,-12,-9,-4,2,6,8,7,4,0,-3,-5,-5,-3,-1,1,3,3,2,1,0,-1,-2,-1,-1,0,1,1,1,0,0,0,0,0,0};
//int buffer[243];
//int iteration = 0;
//
//int fir(int samp_in, int coeffs[243], int buffer[243], int numOfCoeffs)
//{
//	int currentIndex = iteration%numOfCoeffs;
//	buffer[currentIndex] = samp_in;
//
//	int k, sample, coeff;
//    int sum=0;
//    for(k=0; k<numOfCoeffs; k++)
//    {
//    	sample = buffer[k];
//    	coeff = coeffs[(currentIndex-k+numOfCoeffs)%numOfCoeffs];
//    	sum+=sample*coeff;
//    }
//	iteration++;
//    return sum;
//}
//
//int main(void) {
//	int i;
//	int samp_in;
//	int samp_out;
//
//	for(i=0;i<1024;i++)
//	{
//		samp_in = samp_in; // tu powinna byc probka z kodeka
//		samp_out = fir(samp_in, coeffs, buffer, 243);
//		//samp_out = samp_in; // roboczo probka z wejscia na wyjscie
//		out_tab[i] = samp_out; // roboczo do zmiennej globalnej kazda probka wejsciowa
//	}
//	return 0;
//}
