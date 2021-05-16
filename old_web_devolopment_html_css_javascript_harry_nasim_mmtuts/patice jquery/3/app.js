$(document).ready(function(){
$(".start").click(function(){
  $(".demo").animate({
  marginLeft:"100px",
  marginTop:"100px",
  fontSize:"60px",

},3000).slideUp(1000).slideDown(1000);
});
$(".stop").click(function(){
$(".demo").stop();

});

});
