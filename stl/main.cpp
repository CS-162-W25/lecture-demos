// STL: Standard template library
#include <vector>
#include <array>
#include <set>
#include <multiset>
#include <map>


int main() {
	// Vectors: Basically a dynamic array. Resizable. Contiguous.
	// 	Support random access: You can access the ith element very
	// 	fast, even if i is a billion, or zero. They're positional,
	// 	AKA sequential
	
	// Sequential / positional: The container represents a sequence of
	// elements, such that each element has a position decided by the
	// programmer.
	
	// std::array. Similar to vector, but not resizable. Basically a wrapper
	// around an automatic array.
	
	// std::set represents a set. A set is a bag of unique data points.
	
	// Sets are associative containers. An associative container "associates"
	// keys with values.
	
	std::set<int> my_set;
	my_set.insert(100);
	my_set.insert(100);
	std::set<int>::iterator find_result = my_set.find(101);
	// Sets work through an implementation known as a hash table
	
	// std::multiset is a set, but it can have duplicates
	
	// std::map is a class template with TWO template parameters.
	// std::map<std::string, int> is a map that maps, or "associates"
	// strings with integers. Maps are associative.
	std::map<std::string, int> names_to_ages;
	names_to_ages.insert("Alex", 25);
	names_to_ages.find("Alex");

}
