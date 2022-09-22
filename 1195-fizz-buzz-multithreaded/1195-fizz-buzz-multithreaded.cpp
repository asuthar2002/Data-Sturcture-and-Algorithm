#include <semaphore.h>
class FizzBuzz {
private:
    int n;
    sem_t fizz_sem;
    sem_t buzz_sem;
    sem_t fizzbuzz_sem;

public:
    FizzBuzz(int n) {
        this->n = n;
        sem_init(&fizz_sem, 0, 0);
        sem_init(&buzz_sem, 0, 0);
        sem_init(&fizzbuzz_sem, 0, 0);
    }
    
    ~FizzBuzz() {
        sem_destroy(&fizz_sem);
        sem_destroy(&buzz_sem);
        sem_destroy(&fizzbuzz_sem);
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        for (int i = 3; i <= n; i += 3) {
            // divides by 3 but not by 5
            if (i % 5) { 
                sem_wait(&fizz_sem);
                printFizz();
            }
        }
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        for (int i = 5; i <= n; i += 5) {
            // divides by 5 but not by 3
            if (i % 3) {
                sem_wait(&buzz_sem);
                printBuzz();
            }
        }
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(function<void()> printFizzBuzz) {
        for (int i = 15; i <= n; i += 15) {
            sem_wait(&fizzbuzz_sem);
            printFizzBuzz();
        }
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0) {
                if (i % 5 == 0)
                    sem_post(&fizzbuzz_sem);
                else
                    sem_post(&fizz_sem);
            }
            else if (i % 5 == 0)
                sem_post(&buzz_sem);
            else
                printNumber(i);
        }
    }
};