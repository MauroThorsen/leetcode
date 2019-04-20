#include <stdio.h>
int* twoSum(int* nums, int numSize, int target)
{
	int m[2];
	for (int i = 0; i < numSize; i++)
		for(int n = 1; n < numSize  - i;n++)
			if (nums[i] + nums[n] == target)
			{
				if (i >= n)
				{
					m[1] = i;
					m[0] = n;
				}
				else {
					m[0] = i;
					m[1] = n;
				}
				return m;
			}
}
void main()
{
	int nums[] = { 6,4,25,14,15,7,24 };
	int numSize = 7;
	int target = 20;
	int* slvoe;
	slvoe = twoSum(nums, numSize, target);
	printf("%d %d", slvoe[0], slvoe[1]);
}