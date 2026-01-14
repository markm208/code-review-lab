/*
This function removes even numbers from the vector.
*/
void removeEvens(vector < int >& allNumbers)
{
	//go through all of the numbers
	for (int i = 0; i < allNumbers.size(); i++)
	{
		//if a number is even
		if (isEven(allNumbers[i]) == true)
		{
			//remove the number from the vector
			allNumbers.erase(allNumbers.begin() + i);
            
            //in order to avoid skipping a value, decrement i
            i--;
		}
	}
}
//--
bool isEven(int num)
{
	return num % 2 == 0;
}
/*
Counts the number of uppercase and lowercase letters
*/
void countCase(string word, int& numUpper, int& numLower)
{
	for (int i = 0; i < word.length(); i++)
	{
		if (isupper(word[i]))
		{
			numUpper++;
		}
		else
		{
			numLower++;
		}
	}
}
/*
This function returns true if all of the values in numsToSearch are inside arr, and false otherwise.
*/
bool allContainedIn(vector < int > arr, vector < int > numsToSearch)
{
	int f = 0;
	for (int i = 0; i < numsToSearch.size(); i++)
	{
		for (int j = 0; j < arr.size(); j++)
		{
			if (arr[i] == numsToSearch[j])
			{
				f++;
			}
		}
	}

	return f == numsToSearch.size();
}
