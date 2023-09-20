%question1：

%question1

n = input('enter n between 2 to 10 as integer:  ');
% prompts the user to enter n

if ~isnumeric(n) || n < 2 || n > 10 || mod(n, 1) ~= 0
    error('enter valid n between 2 to 10 as integer');
end
% verfiy n is vaild or not
% checks whether variable n is not an integer

% mod(n, 1) ~= 0 is a logical expression ...
% that checks whether a number n is not an integer

n_base_number = input(['enter a' num2str(n) ' base-n number： '], 's');
% num2str(n) converts the integer n into a string
% 's' input function to process the user's input as a string


m = input('enter m between 2 to 10 as integer:  ');
% prompts the user to enter m

if ~isnumeric(m) || m < 2 || m > 10 || mod(m, 1) ~= 0
    error('enter valid m between 2 to 10 as integer');
end
% verfiy m is vaild or not
% checks whether variable m is not an integer

decimalnumber = base2dec(n_base_number, n);
% base2dec:built-in function used to perform base conversions
% convert n-base number to decimal number using base2dec function
% n_base_number:a string representing the n-base number entered by the user
% n:the base of the target base number

m_base_number = dec2base(decimalnumber, m);
% convert decimal number to base m number using dec2base function
% store the result in m_base_number variable


fprintf('Your number in base-%d is: %s\n', m, m_base_number);
% the conversion results are displayed in the command window in a format
% it replaces the placeholders %d and %s in the string with actual numeric and string values



