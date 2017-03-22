import angular from 'angular'
import uirouter from 'angular-ui-router'

import HomeController from './home.controller.js'
import routing from './home.routes'

export default angular.module('app.home', [uirouter])
  .config(routing)
  .controller('HomeController', HomeController)
  .name
