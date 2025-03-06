void foo(int n) {
	if (n == 0) {
		return;
	}
	
	foo(n - 1);
	std::cout << n << std::endl;
}

int main() {

	foo(10);
}
