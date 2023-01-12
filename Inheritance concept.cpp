# include<iostream>
using namespace std;
class student{
//	private:
	//	int roll no;
	protected:
		int pass;

	public:
	
			student(){
			pass=567;
		}
	
};
class teacher:public student{
	float marks;
	public:
		teacher(){
			marks=69;
			void display();
		}
};
void teacher::void display(){
	cout<<"pass="<<pass<<" "<<"marks="<<marks<<endl;
}
int main(){
	teacher t1;
	t1.display();
	return 0;
}
