#pragma once

namespace Shopee
{
	//cache��
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