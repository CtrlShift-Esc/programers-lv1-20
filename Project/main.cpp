#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "";
	for (int i = 0; i < n; i++)
		answer = i % 2 == 0 ? answer + "��" : answer + "��";
	return answer;
}

void main()
{
	//test
	//auto ret = solution(3);
}