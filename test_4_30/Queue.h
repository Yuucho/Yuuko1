#pragma once

namespace Shopee
{
	//cache×é
	namespace cache
	{
		int b = 0;
		struct Node
		{
			int val;
			struct Node* next;
		};
	}
}