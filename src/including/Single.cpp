/*
 * Single.cpp
 *
 *  Created on: 2016年3月11日
 *      Author: Dell
 */

class Single
{
public:
	static Single getInstance()
	{
		return Inner::single;
	}
	// 类的析构函数不能是私有的！
	~Single(){}
private:
	Single(){}

	class Inner
	{
	public:
		static Single single;
	private:
		Inner(){}
	};
};
