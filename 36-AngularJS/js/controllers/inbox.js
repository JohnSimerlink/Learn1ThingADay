/**
* Controller: InboxCtrl
*/
angular.module('EmailApp')
	.controller('InboxCtrl',
		function InboxCtrl ($scope, InboxFactory ){
			'use strict';
			$scope.meta = {
				title: "My Inbox"
			}
			InboxFactory.getMessages()
				.success(function(jsonData, statusCode){
					console.log('The request was successful!', statusCode);
					console.log(jsonData)
					// Now add the Email messages to the controller's scope
					$scope.data = {
						emails: jsonData
					}
				})
				cons
		})