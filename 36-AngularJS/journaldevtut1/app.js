var app = angular.module('mainApp', [])

app.directive('myEmployee', function() {
  return {
    scope: {
      role: '@',
      boss: '@'
    },
    restrict: 'E',
    template: "<h3> Employee Role {{role}} {{boss}}</h3>",
  }
})
