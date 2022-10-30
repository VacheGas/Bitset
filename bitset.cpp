#include <iostream>
#include <vector>

class Bitset {
public:
	std::vector<u_int8_t> m_bitset;
	int m_size;
	bool m_reverse = false;
	int m_count_one = 0;
	
public:
	Bitset(int size) {
		m_bitset.resize(size, 0);
		m_size = size;
	}
	
	void fix(int idx) {
		if ((m_bitset[idx] == 0 && m_reverse == false) || (m_bitset[idx] == 1 && m_reverse == true)) {
			++m_count_one;
			m_bitset[idx] = (m_reverse) ? 0 : 1;
		}
	}
	
	void unfix(int idx) {
		if ((m_bitset[idx] == 1 && m_reverse == false) \
		|| (m_bitset[idx] == 0 && m_reverse == true)) {
			--m_count_one;
			m_bitset[idx] = (m_reverse) ? 1 : 0;
		}
	}
	
	void flip() {
		m_reverse = !m_reverse;
		m_count_one = m_size - m_count_one;
	}
	
	bool all() {
		return m_count_one == m_size;
	}
	
	bool one() {
		return m_count_one >= 1;
	}
	
	int count() {
		return m_count_one;
	}

	std::string toString() {
		std::string res;
		res.reserve(m_size);
		int i = 0;

		while (i < m_size) {
			if ((m_bitset[i] == 1 && m_reverse == false) \
			|| (m_bitset[i] == 0 && m_reverse == true)) {
				res.push_back('1');
			} else {
				res.push_back('0');
			}
			++i;
		}
		return res;
	}
};

int main() {
	Bitset a (2);
	a.flip();
	std::cout << a.count()<< ' '<< a.toString() << std::endl;
	a.unfix(1);
	std::cout << a.count()<< ' '<< a.toString() << std::endl;
	a.fix(1);
	std::cout << a.count()<< ' '<< a.toString() << std::endl;
	a.fix(1);
	std::cout << a.count()<< ' '<< a.toString() << std::endl;
	a.unfix(1);
	std::cout << a.count()<< ' '<< a.toString() << std::endl;
}