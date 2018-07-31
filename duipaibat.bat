:again
data > input.txt
right < input.txt > right_output.txt
me < input.txt > me_output.txt
fc right_output.txt me_output.txt
if not errorlevel 1 goto again
pause