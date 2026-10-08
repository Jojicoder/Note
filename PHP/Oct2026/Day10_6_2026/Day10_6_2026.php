<?php
function myDetails($name, $age, $country) {
	echo "
		My name is $name <br>
		My age is $age <br>
		My country is $country <br><br>
	";
}
myDetails('Joe', 22, 'USA');
myDetails('Adam', 25, 'United Kingdom');
myDetails('David', 30, 'France');

?>
