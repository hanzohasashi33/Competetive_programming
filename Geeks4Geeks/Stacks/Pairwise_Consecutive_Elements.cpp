
bool pairWiseConsecutive(stack<int> s)
{
    //Code here
	stack<int> aux;
	int aux_size=0;
	while (!s.empty()) {
		aux.push(s.top());
		s.pop();
		aux_size++;
	}
	bool result = true;
	while (aux_size>1) {
		int x = aux.top();
		aux.pop();
		int y = aux.top();
		aux.pop();
		if (abs(x - y) != 1)result = false;
		s.push(x);
		s.push(y);
		aux_size--;
		aux_size--;
	}
	if (aux.size() == 1)
		s.push(aux.top());
	return result;
}
