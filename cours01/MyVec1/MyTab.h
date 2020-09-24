#pragma once

template<typename T>

class MyTab
{

public:
	T* data;
	int size = 0;

	MyTab(int size) 
	{
		data = new T[size];
		for (int i = 0; i < _size; i++) {
			data[i] = {};
			this->size = _size;
		}
	}

	virtual ~MyTab() 
	{
		delete[]data;
		cout << "delete" << endl;
	}

	T & get(int idx) 
	{
		if (idx >= size) 
		{
			throw"out of bound maj";
		}
		if (idx < 0) 
		{
			throw"out of bound min";
		}
		return data[idx]
	}



	void set (int idx, T val) 
	{
		data[idx] = val;
	}
};



