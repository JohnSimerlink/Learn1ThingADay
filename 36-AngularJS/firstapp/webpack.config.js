'use strict';

//modules
var webpack = require('./webpack')
var autoprefixer = require('autoprefixer')
var HtmlWebpackPlugin = require('html-webpack-plugin')
var ExtractTextPlugin = require('extract-text-plugin')
var CopyWebpackPlugin = require('copy-webpack-plugin')

/* 
 * ENV
 * Get npm lifecycle event to identify the environment
 */
var ENV = process.env.npm_lifecycle.event
var isTest = ENV == 'test' || ENV == 'test-watch'

