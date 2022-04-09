function toggle_darkMode() {
	var elements = document.querySelectorAll(':scope body *, html, body');
	if (document.getElementById("checkbox").checked == true) {
		for (i = 0; i < elements.length; i++) {
			elements[i].classList.add("dm");
		}
		// console.log("night");
	} else {
		for (i = 0; i < elements.length; i++) {
			elements[i].classList.remove("dm");
		}
		// console.log("day");
	}
}

$(function () {
	$("#header").load("/4U-Programming-language/header.html");
});