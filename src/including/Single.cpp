/*
 * Single.cpp
 *
 *  Created on: 2016年3月11日
 *      Author: Dell
 */

/*
 * C++中的单例模式不是太好写，使用内部类的形式
 * 内部类中的static成员变量不能拿出地址来
 *
	class Single
	{
		public static Single getInstance()
		{
			return Inner.single;
		}

		private Single()
		{
		}

		private static class Inner
		{
			public static Single single = new Single();
			private Inner(){}
		}
	}

	enum SingleEnum {single}
 */
class Single
{
public:
	static Single getInstance()
	{
		return Single::Inner::single;
	}
	// 类的析构函数不能是私有的！
	~Single(){}

private:
	Single(){}

	class Inner
	{
	private:
		Inner(){}
	public:
		static Single single;
	};
};
