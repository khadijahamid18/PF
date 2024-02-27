$(document).ready(function(){
 window.showNavbar = false;
$('#menu').click(function(){
    showNavbar = !showNavbar;
  
     
    $(this).toggleClass('fa-times');
    $('.navbar').toggleClass('nav-toggle'); 
});

$(window).on('load',function(){
    $('#menu').removeClass('fa-times');
    $('.navbar').toggleClass('nav-toggle'); 

});

});

