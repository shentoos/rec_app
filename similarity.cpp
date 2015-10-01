#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double sim(vector <int> v1,vector <int> v2)
{
	int sizeOfVec=(int)max(v1.size(),v2.size());

	double vecCross=0;
	for (int x = 0; x < sizeOfVec; x++)
		vecCross+=v1[x]*v2[x];

	double lenght1=0,lenght2=0;
	for (int i = 0; i < sizeOfVec; ++i)
	{
		lenght1+= v1[i]*v1[i];
		lenght2+= v2[i]*v2[i];
	}
	lenght1 = sqrt(lenght1);
	lenght2 = sqrt(lenght2);

	double similarity = vecCross/(lenght1*lenght2);

	return similarity;
}

int main()
{
	int n,x;
	cin>>n;
	vector<int> vec1,vec2;
	for (int i = 0; i < n; i++)
	{
		cin>>x;
		vec1.push_back(x);
	}

	for (int i = 0; i < n; i++)
	{
		cin>>x;
		vec2.push_back(x);
	}
	cout<<sim(vec1,vec2);
	return 0;
}