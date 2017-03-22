import './main.css'; //require('./main.css');
//import jquery from './node_modules/jquery/dist/jquery.js'
import jQuery from 'jquery'
require('jquery')
require('bootstrap')
import angular from 'angular';
import routing from './app.config';
document.write('it taoirstensrdoaien            was the beginning');
angular.module('app', ['ui-router', 'home'])
  .config(routing);
