for((i = 1; ; ++i)); do
    echo "TEST $i PASSED !" 
    ./gen $i*2 > int
    ./a < int > out1
    ./brute < int > out2
    diff -w out1 out2 || break
    # diff -w <(./a < int) <(./brute < int) || break
done