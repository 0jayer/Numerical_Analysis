def f(x):
    return x**3 - x**2 -1

def df(x):
    return 3*x**2 - 2*x

x0 = -10
TOL = 0.000001
N = 10000
x1 = x0 - f(x0)/df(x0)

while(abs(f(x0)/df(x0))>TOL and N>0):
    x1 = x0-f(x0)/df(x0)
    N-=1
    x0 = x1
    print("x0 = ", x0, "x1 = ", x1, "N = ", N)
    if(abs(f(x0)/df(x0))<TOL):
        print(f"Converged to {x1} in {10000-N} iterations")
        break
    if(abs(x1-x0)>TOL and N<0):
        print("No convergence")
        break