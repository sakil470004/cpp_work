$(document).ready(function(){

$(".show").click(function(){

  $(".demo").show(1100,function(){
    $(".demo").html("Show successfully")
  });
});

//I can use  fadeIN(),fadeOut(),fadeToggle(it's very spicial for me),fadeTO(1000,0.5 //opacitiy)



$(".hide").click(function(){

  $(".demo").hide(700,function(){
    alert("Hide successfully")
  });
});





});
