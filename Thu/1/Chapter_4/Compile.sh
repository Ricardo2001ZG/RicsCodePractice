# 
# !/bin/zsh
#
# Compile shell script
#
echo -e "\nCompile Command(Debug): \n"

echo -e "clang++ -Weverything -fsanitize=address \
-O1 $1.cpp -o $1_debug\n"

clang++ -Weverything -fsanitize=address \
-O1 $1.cpp -o $1_debug

echo -e "Run Application(Debug): $1_debug\n"

./$1_debug
sudo rm -rf $1_debug

echo -e "\nCompile Command(Released): \n"

echo -e "clang++ -O2 $1.cpp -o $1_Released\n"

clang++ -Weverything -fsanitize=address \
-O2 $1.cpp -o $1_Released

echo -e "Run Application(Released): $1_Released\n"

./$1_Released
sudo rm -rf $1_Released
