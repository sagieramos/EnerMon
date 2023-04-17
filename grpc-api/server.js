/*jshint esversion: 8*/

const grpc = require('grpc');
const protoLoader = require('@grpc/proto-loader');

// Options needed for loading Proto file
const options = {
  keepCase: true,
  longs: String,
  enums: String,
  defaults: true,
  oneofs: true,
};

const pkg_def = protoLoader.loadSync('/protos/init.proto', options);
const init_proto = grpc.loadPackageDefinition(pkg_def);

const server = new grpc.Server();
const mcu_service = {
