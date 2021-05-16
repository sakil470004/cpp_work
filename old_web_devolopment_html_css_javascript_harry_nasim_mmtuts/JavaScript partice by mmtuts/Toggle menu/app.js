let toggleNavStatus = false ;
let toggleNav = function(){
  let getSidebar = document.querySelector(".nav-sidebar");
  let getSidebarUl = document.querySelector(".nav-sidebar ul");
  let getSidebarUlTitle = document.querySelector(".nav-sidebar ul span");
  let getSidebarUlA = document.querySelectorAll(".nav-sidebar a");
  if(toggleNavStatus === false ){
    getSidebarUl.style.visibility = "visible";
    getSidebar.style.width = "272px";
    getSidebarUlTitle.style.opacity = "0.5";
    let arrayLength = getSidebarUlA.length;
    for (let i = 0; i < arrayLength; i++) {
      getSidebarUlA[i].style.opacity = "1";
    }
    toggleNavStatus = true;
  }
  else if (toggleNavStatus === true ){
    getSidebar.style.width = "50px";
    getSidebarUlTitle.style.opacity = "0.5";
    let arrayLength = getSidebarUlA.length;
    for (let i = 0; i < arrayLength; i++) {
      getSidebarUlA[i].style.opacity = "0";
    }
        getSidebarUl.style.visibility = "hidden";

    toggleNavStatus = false;
  }
}
