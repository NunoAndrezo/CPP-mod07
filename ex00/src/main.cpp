#include <../inc/Template.hpp>

class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int get_n() const { return _n; }
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void)
{
	Awesome opa(2), opb(4);

	swap(opa, opb);
	std::cout << opa << " <- a and b -> " << opb << std::endl;
	std::cout << max(opa, opb) << std::endl;
	std::cout << min(opa, opb) << std::endl;

	//try min(10, 20) or min(Awesome(5), Awesome(10))

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
	return (0);
}
