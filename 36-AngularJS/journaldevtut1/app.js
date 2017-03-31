var app = angular.module('mainApp', [])

app.directive('myEmployee', function() {
  return {
    restrict: 'E',
    template: "<br><br> <input type='text' ng-model='someText'> {{someText}}",
  }
})
