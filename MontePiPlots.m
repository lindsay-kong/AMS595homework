
% question3 - b

n_values = [100, 1000, 10000, 100000, 1000000];
% define a range of n values represents the different sample sizes used to estimate π

execution_times = zeros(size(n_values));
absolute_errors = zeros(size(n_values));
%  initialize arrays to store execution times and absolute errors
%  these two arrays is to record the results in different runs 
%  -of the Monte Carlo method for subsequent generation of graphs


for i = 1:length(n_values)
    n = n_values(i);
    % loop over different values of n
    % performance and accuracy of the Monte Carlo method-
    % to be evaluated at different sample sizes
    
 
    tic;
    [~, abs_error, ~] = MontePi(n);
    execution_times(i) = toc;
    %  measure the execution time of-
    %  the Monte Carlo method and record the absolute error

    absolute_errors(i) = abs_error;
    % store the absolute error
end


figure;
subplot(3, 1, 1);
plot(n_values, execution_times, '-o');
xlabel('n (number of points)');
ylabel('execution time (seconds)');
title('execution time vs. n');
% plot 1: execution times vs. n

% create a graph with three subgraphs
% Plot a line graph '-o' means to plot-
% a line graph and show circle markers on the data points



subplot(3, 1, 2);
loglog(n_values, absolute_errors, '-o');
xlabel('n (number of points)');
ylabel('absolute error');
title('absolute error vs. n (log-log scale)');
% plot 2: absolute errors vs. n


fixed_n = 10000;
% fixed value of n for random points visualization


[~, ~, ~, points_inside] = MontePiVisualization(fixed_n);
% generate random points for visualization

points_inside = points_inside(any(points_inside,2),:);
% remove rows with all zeros (unused points)



subplot(3, 1, 3);
scatter(points_inside(:, 1), points_inside(:, 2), 10, 'filled');
axis equal;
title('random points visualization');
xlabel('x');
ylabel('y');
% plot 3: random points visualization

text(0.7, -0.7, ['Approximated Pi: ' num2str(pi)], 'FontSize', 10);
% print the final approximation of pi



function [pi_approx, abs_error, rel_error, points_inside] = MontePiVisualization(n)
    inside_circle = 0;
    points_inside = zeros(n, 2);
    % define the MontePiVisualization function

    % accepts the argument n
    % which indicates the number of random points to be generated

    % this function will return four values, the estimated π value pi_approx, 
    % the absolute error abs_error, the relative error rel_error, and points_inside
    %is a matrix containing the coordinates of the random points



    for i = 1:n
        x = rand();
        y = rand();
        
        if x^2 + y^2 <= 1
            inside_circle = inside_circle + 1;
            points_inside(inside_circle, :) = [x, y];
        end
    end
   
    points_inside = points_inside(1:inside_circle, :);
    % removes unused rows so that only the coordinates of- 
    % points that are actually used remain
    
    pi_approx = 4 * inside_circle / n;
    abs_error = abs(pi - pi_approx);
    rel_error = abs_error / pi;
end


function [pi_approx, abs_error, rel_error] = MontePi(n)

    inside_circle = 0;

    for i = 1:n
        x = rand(); 
        y = rand(); 
        

        if x^2 + y^2 <= 1
            inside_circle = inside_circle + 1;
        end
    end
    
    pi_approx = 4 * inside_circle / n;

    abs_error = abs(pi - pi_approx);

    rel_error = abs_error / pi;
end
% define the MontePi function same as question3 part-a
% the first part is for visualization 
% and the second part is for calculation of the estimated π-value


