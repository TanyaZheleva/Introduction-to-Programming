#pragma once
#include <iostream>
#include<string.h>

int length(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
bool existFile(const char* fileSystem,int start)
{
	for (int i = start; i < length(fileSystem); i++)
	{
		if (fileSystem[i] == '.')
		{
			return true;
		}
	}
	return false;
}

int FindNameLength(const char* fileSystem,int start,bool file)
{
	int count = 0;
	if (file == true)
	{
		while (fileSystem[start] != '\\')
		{
			start--;
			count++;
		}
	}
	else
	{
		while (fileSystem[start] != '\\')
		{
			start++;
			count++;
		}
	}
	return count;
}

int countDirectories(const char* fileSystem, int endIndexFile)
{
	int count = 0;
	while (endIndexFile >= 0)
	{
		if (fileSystem[endIndexFile] == 't' && fileSystem[endIndexFile - 1] == '\\')
		{
			endIndexFile--;
			count++;
		}
		endIndexFile--;
		if (fileSystem[endIndexFile] == 'n' && fileSystem[endIndexFile - 1] == '\\')
		{
			return count;
		}
	}
	return count;
}

int FindFileIndex(const char* fileSystem,int start)
{
	int size = length(fileSystem);
	for (int i = start; i < size; i++)
	{
		if (fileSystem[i] == '.')
		{
			return i+3;
		}
	}
	return -1;
}

int findSubDirectoryIndex(const char* fileSystem, int start,int subCount)
{
	int count = 0;
	while (start >= 0)
	{
		if (fileSystem[start] == 't' && fileSystem[start - 1] == '\\')
		{
			start--;
			count++;
		}
		if (count==subCount)
		{
			return start+subCount*2-1;
		}
		start--;
	}
	return start + subCount * 2;
}
int countFiles(const char* fileSystem, int start)
{
	int count = 0;
	int endIndex = 0;
	while (existFile(fileSystem, start))
	{
		count++;
		endIndex=FindFileIndex(fileSystem, start);
		start = endIndex;
		
	}
	return count;
}

int findLongestPath(const char* fileSystem)
{
	if (existFile(fileSystem, 0) == true)
	{
		int fileIndex = 0;
		int fileLength = 0;
		int directories = 0;
		int subDirIndex = 0;
		int subDirLength = 0;
		int mainDirLength = 0;
		int pathLength = 0;
		int count_files = countFiles(fileSystem, 0);
		int* pathLengths = new int[count_files];
		int j = 0;
		for (int q = 0; q < count_files; q++)
		{
			fileIndex = FindFileIndex(fileSystem, j);
			fileLength = FindNameLength(fileSystem, fileIndex, true);
			directories = countDirectories(fileSystem, fileIndex);
			subDirIndex;
			subDirLength = 0;
			for (int i = 0; i < directories - 1; i++)
			{
				int subcount = directories - i - 1;
				int start = fileIndex - fileLength - directories * 2 - subDirLength;
				if (subDirLength > 0)
				{
					start -= (directories - i) * 2;
				}
				subDirIndex = findSubDirectoryIndex(fileSystem, start, subcount);
				subDirLength += FindNameLength(fileSystem, subDirIndex, false);
				mainDirLength = FindNameLength(fileSystem, 0, false);
				pathLength = fileLength + subDirLength + mainDirLength;
				j = fileIndex;
				pathLengths[q] = pathLength;
			}
			int max = 0;
			for (int i = 0; i < count_files; i++)
			{
				if (pathLengths[i] > max)
				{
					max = pathLengths[i];
				}
			}
			return max;
		}
	}
		return 0;
}

int main()
{
	char fileSystem []= "dir\\n\\tsubdir1\\n\\t\\tfile1.ext\\n\\t\\tsubsubdir1\\n\\tsubdir2\\n\\t\\tsubsubdir2\\n\\t\\t\\tfile2.ext";
	/*dir
        subdir1
          file1.ext
          subsubdir1
        subdir2
          subsubdir2
          file2.ext*/

	std::cout << findLongestPath(fileSystem);
	return 0;
}