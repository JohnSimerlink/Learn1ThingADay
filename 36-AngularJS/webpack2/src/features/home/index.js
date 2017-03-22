import angular from 'angular'
import ui-router from 'angular-router'

import HomeController from './src/features/home/home.controller'
import HomeRoutes from './src/features/home/home.routes'

export default angular.module('app.home', [ui-router])
  .config(routing)
  .controller('HomeController', HomeController)
  .name
