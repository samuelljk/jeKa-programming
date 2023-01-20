#Example:
def add5(number):
    total = number+5
    
    return total

number = 10
number_added_5 = add5(number)
print(number_added_5)

## |===== LAMBDA FUNCTION ===| --> untuk mempersingkat FUNCTION (tidak disarankan untuk function complex)
add5 = lambda X: X+2
# (nama function) = lambda (parameter):(isi function)
number = 10
total = lambda n: n+5
print(total(number))
