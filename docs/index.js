function toggle_darkMode() {
	var elements = document.querySelectorAll(':scope body *, html, body');
	console.log(elements);
	for (i = 0; i < elements.length; i++) {
		elements[i].classList.toggle("dm");
	}
}
