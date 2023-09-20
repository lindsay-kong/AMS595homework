
%question3-a
% Monte Carlo algorithm you described is a simple and intuitive way to estimate the value of π using random points

n = input('enter the number of random points (e.g.10000): ');
% prompt the user to enter number of random points

[pi_approx, abs_error, rel_error] = MontePi(n);
% call MontePi function to perform the Monte Carlo estimation
% store π-value, absolute error and relative error in the corresponding variables

fprintf('Approximated Pi: %f\n', pi_approx);
fprintf('Absolute Error: %f\n', abs_error);
fprintf('Relative Error: %f\n', rel_error);
% show estimated π, absolute and relative errors


function [pi_approx, abs_error, rel_error] = MontePi(n)
% define the MontePi function 
    inside_circle = 0;
    % initialize counters for points inside the circle and total points
    
 
    for i = 1:n
        x = rand();
        y = rand(); 
        % generate random points and check if they fall inside the circle
        % random number between 0 and 1 for x-coordinate and y-coordinate 

        if x^2 + y^2 <= 1
            inside_circle = inside_circle + 1;
        end
    end
    % check if the point is inside the circle
    % If (x, y) falls inside a unit radius circle ( x² + y² <= 1), 
    % add 1 to the inside_circle counter to indicate that the point lies inside the circle
    
  
    pi_approx = 4 * inside_circle / n;
    % calculate the approximate value of pi

  
    abs_error = abs(pi - pi_approx);
    % calculate the absolute error
    
   
    rel_error = abs_error / pi;
    % calculate the relative error
end



