/**
* Factory: InboxFactory
*/

angular.module('EmailApp')
.factory('InboxFactory', function InboxFactory ($q, $http, $Location){
	'use strict';
	var exports {};

	exports.getMessages = function () {
		return $http.get('json/emails.json')
		.error(function(data) {
			console.log("there was an error!", data);
		})
	};

	return exports;
})