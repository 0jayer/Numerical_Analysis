def f(x):
    return 0.5 * pow(10-x*x*x,0.5)

x0 = 0.5
TOL = 1e-6
N = 1000
i = 1

while i<=N:
    x = f(x0)
    if(abs(x-x0)<TOL):
        break
    print(f"Iteration {i}: x = {x}")
    x0=x
    i+=1

if i>N:
    print("The method did not converge")
