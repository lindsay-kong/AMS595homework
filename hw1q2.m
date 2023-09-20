
%question2：
% gaussian elimination is a method for solving matrix equations of the form Ax=b
% system of linear equations Ax = b, A is an n×n matrix, b is a vector

A = input('enter matrix A (n x n):  ');
% prompts the user to enter matrix A

b = input(['enter vector b (n x 1):  ']);
% prompts the user to enter vector b

[n, ~] = size(A);
% get the dimension information of matrix A
% size(A) obtains the dimension information of matrix A
% number of rows is stored in the variable n


if size(b, 1) ~= n
    error(['matrix A and vector b dimensions not match']);
end
% this code check dimensions of matrix A and vector b match
% ~= is not-equal operator, true if value on the left is not equal to value on the right
% size(b,1): obtain the dimension information of vector b
% n contains the number of rows of matrix A


for k = 1:n-1
    for i = k+1:n
        factor = A(i,k) / A(k,k);
        A(i,k+1:end) = A(i,k+1:end) - factor * A(k,k+1:end);
        b(i) = b(i) - factor * b(k);
    end
end
% convert matrix A into an upper triangular matrix for subsequent back generations
% for k = 1:n-1  : n is number of rows in matrix A
% for i = k+1:n  : to zeroize the lower triangular part of the matrix A
% factor: eliminate elements in the lower triangular part of the matrix A
% A(i,k+1:end) :factor to update the ith row eliminte the lower triangular element in that row
% b(i): ensure that the consistency of the system of linear equations


x = zeros(n, 1);
x(n) = b(n) / A(n,n);
% creates an n-dimensional zero vector x
% compute the last element of the solution vector x


for i = n-1:-1:1
    x(i) = (b(i) - sum(A(i,i+1:end) * x(i+1:end))) / A(i,i);
end
% compute the other elements of the solution vector x in turn
% compute the ith element of the solution vector x
% the final step of the Gaussian elimination method for finding the solution of the system of equations


disp('Solution vector x:');
disp(x);
% disp:  displays the value of variable x in command window


