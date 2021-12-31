# You must add all the .cpp files to the g++ command.
# note the stub.cpp here:
# g++ -std=gnu++11 -o basic_test ../_tests/_test_files/basic_test.cpp ../includes/stub/stub.cpp -Igoogletest/googletest/include -pthread -Lgoogletest/build/lib -lgtest
################################################################################


g++ -std=gnu++11 -o main       ../main.cpp                          -Igoogletest/googletest/include -pthread -Lgoogletest/build/lib -lgtest
g++ -std=gnu++11 -o basic_test ../_tests/_test_files/basic_test.cpp  ../includes/tokenizer/ftokenize.cpp  ../includes/tokenizer/stokenize.cpp  ../includes/tokenizer/state_machine_functions.cpp  ../includes/tokenizer/token.cpp -Igoogletest/googletest/include -pthread -Lgoogletest/build/lib -lgtest
g++ -std=gnu++11 -o testB      ../_tests/_test_files/testB.cpp  ../includes/tokenizer/ftokenize.cpp  ../includes/tokenizer/stokenize.cpp  ../includes/tokenizer/state_machine_functions.cpp  ../includes/tokenizer/token.cpp      -Igoogletest/googletest/include -pthread -Lgoogletest/build/lib -lgtest



