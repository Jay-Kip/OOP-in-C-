#include <iostream>
using std::string;

// Demonstration of using a destructor

class File {
	private:
		string fileName;

	public:
		File (string name) {
			fileName = name;
		}

		// Destructor
		~File () {
			// Clean up resources
			//  Close file handles, release memory
			std::cout << "Deleting files: " << fileName << std::endl;
		}

};

int main() {
	// Create an object
	
	File file_1("example.txt");

	// Do some file operations
	
	// The destructor is automatically called when the object goes out of scope
	
	return (0);
}
