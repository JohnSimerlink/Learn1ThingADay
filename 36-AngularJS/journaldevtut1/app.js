var app = angular.module('mainApp', [])

app.directive('myEmployee', function() {
  return {
    scope: {},
    restrict: 'E',
    template: "<h3> Employee Role {{role}} {{boss}}</h3>",
    link: function(scope, element, attrs){
      scope.role = attrs.role
      scope.boss = attrs.boss
    }
  }
})
