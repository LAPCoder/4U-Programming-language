function toggle_darkMode() {
	var elements = [document.body, document.h3, document.code, document.getElementsByClassName("wrapper"), 
					document.getElementsByClassName("dot"), document.getElementsByClassName("nav-block"), 
					document.getElementsByClassName("sub-nav"), document.h1.getElementsByClassName("sub-nav"), 
					document.getElementsByClassName("main-title"), document.getElementsByClassName("main-content")];
	for(i = 0; i<elements.length; i++) {
		elements[i].classList.toggle("dm");
	}
}
