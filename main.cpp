echo "#include <iostream>" > main.cpp
echo "int main() { std::cout << \"Hello, world!\" << std::endl; return 0; }" >> main.cpp

git add main.cpp
git commit -m "Add main.cpp to trigger C++ language detection"
git push origin main

echo "// Update to trigger language reanalysis" >> main.cpp
git add main.cpp
git commit -m "Trigger C++ language reanalysis"
git push origin main
