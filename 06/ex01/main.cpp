#include <iostream>
struct Data
{
	std::string s1;
	int			n;
	std::string s2;
};

void *serialize(void)
{
	std::string array = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *result = new char[20];
	srand(time(NULL));
	for (int i = 0; i < 8; i++)
		result[i] = array[rand() % 62];
	*reinterpret_cast<int *>(result + 8) = rand() % 21;
	for (int i = 0; i < 8; i++)
		result[i + 12] = array[rand() % 62];
	return (result);
}

Data *deserialize(void *raw)
{
	Data *data = new Data;
	data->s1 = std::string(static_cast<char *>(raw), 8);
	data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
	data->s2 = std::string(static_cast<char *>(raw) + 12, 8);
	return (data);
}

int main(void)
{
	void *ser = serialize();
	std::cout << "Address: " << ser << std::endl;
	Data *data = deserialize(ser);
	std::cout << "S1:      " << data->s1 << std::endl;
	std::cout << "N:       " << data->n << std::endl;
	std::cout << "S2:      " << data->s2 << std::endl;
	delete ((char *)ser);
	delete (data);
	return (0);
}
