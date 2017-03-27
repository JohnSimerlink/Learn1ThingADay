//this will be app.js
import angular from 'angularjs'
import style from '../style/app.css'
let app = () => {
  return {
    template: require('./app.html')
    , controller: 'AppCtrl',
    controllerAs: 'app'
  }
}

class AppCtrl {
  constructor() {
    this.url = 'http://simer.link'
  }
}

const MODULE_NAME = 'app'

angular.module(MODULE_NAME, [])
  .directive('app', app)
  .controller('AppCtrl', AppCtrl)

export default MODULE_NAME
