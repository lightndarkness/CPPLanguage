#include <string>
#include "Resource.h"

using namespace std;

int main()
{
	{
		Resource localResource("local");
		string localString = localResource.GetName();
	}
	Resource* pResource = new Resource("created with new");
	string newString = pResource->GetName();
	if (1)
	{
		return 0;
	}
	Resource* p2 = pResource;
	string string2 = p2->GetName();
	delete pResource;
	//string string3 = pResource->GetName();
	/*pResource = nullptr;
	delete pResource;
	delete p2;*/

	return 0;
}