#include "FileSystemManager.h"

namespace cpptutor::file_system {

FileSystemManager::FileSystemManager(string fullpath_str) {
  filesystem::path fs_path(fullpath_str);
  error_code err_code;

  if (filesystem::is_directory(fs_path, err_code)) {
    cerr << "Directory not allowed: " << fullpath_str << endl;
    throw "Directory not allowed: " + fullpath_str;
  }
  if (err_code) {
    cerr << "Error in is_directory: " << err_code.message() << endl;
  }

  if (filesystem::is_regular_file(fs_path, err_code)) {
    this->basePath = this->recognizePath(fullpath_str);
    this->fileName = this->recognizeFileName(fullpath_str);
    this->fileExtension = this->recognizeExtension(fullpath_str);
  }
  if (err_code) {
    cerr << "Error in is_regular_file: " << err_code.message() << endl;
    throw "Error in is_regular_file: " + fullpath_str;
  }
}

FileSystemManager *FileSystemManager::write(string content) {
  ofstream targetFile(this->basePath);
  targetFile << content;
  targetFile.close();
  return this;
}

} // namespace cpptutor::file_system
