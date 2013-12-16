% This function can be run only after 
% MyLibrary has been compiled

function out = func1 (a, b)
    out = MyLibrary('func1', a, b);
end
