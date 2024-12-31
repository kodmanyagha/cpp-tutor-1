#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;

namespace cpptutor::file_system {

class FileSystemManager {
public:
  string basePath;
  string fileName;
  string fileExtension;

  FileSystemManager(string fullpath);

  FileSystemManager *write(string content);
  string read();

protected:
  FileSystemManager *open();
  FileSystemManager *close();

  string recognizePath(string path_str);
  string recognizeFileName(string path_str);
  string recognizeExtension(string path_str);
};

} // namespace cpptutor::file_system
