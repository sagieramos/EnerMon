// GENERATED CODE -- DO NOT EDIT!

'use strict';
var grpc = require('grpc');
var protos_init_pb = require('../protos/init_pb.js');

function serialize_main_GenericRequest(arg) {
  if (!(arg instanceof protos_init_pb.GenericRequest)) {
    throw new Error('Expected argument of type main.GenericRequest');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_main_GenericRequest(buffer_arg) {
  return protos_init_pb.GenericRequest.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_main_SensorRequest(arg) {
  if (!(arg instanceof protos_init_pb.SensorRequest)) {
    throw new Error('Expected argument of type main.SensorRequest');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_main_SensorRequest(buffer_arg) {
  return protos_init_pb.SensorRequest.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_main_SensorResponse(arg) {
  if (!(arg instanceof protos_init_pb.SensorResponse)) {
    throw new Error('Expected argument of type main.SensorResponse');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_main_SensorResponse(buffer_arg) {
  return protos_init_pb.SensorResponse.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_main_SettingsResponse(arg) {
  if (!(arg instanceof protos_init_pb.SettingsResponse)) {
    throw new Error('Expected argument of type main.SettingsResponse');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_main_SettingsResponse(buffer_arg) {
  return protos_init_pb.SettingsResponse.deserializeBinary(new Uint8Array(buffer_arg));
}


var AsyncService = exports.AsyncService = {
  mcuUpdates: {
    path: '/main.Async/McuUpdates',
    requestStream: true,
    responseStream: true,
    requestType: protos_init_pb.GenericRequest,
    responseType: protos_init_pb.SettingsResponse,
    requestSerialize: serialize_main_GenericRequest,
    requestDeserialize: deserialize_main_GenericRequest,
    responseSerialize: serialize_main_SettingsResponse,
    responseDeserialize: deserialize_main_SettingsResponse,
  },
  interface: {
    path: '/main.Async/interface',
    requestStream: false,
    responseStream: true,
    requestType: protos_init_pb.SensorRequest,
    responseType: protos_init_pb.SensorResponse,
    requestSerialize: serialize_main_SensorRequest,
    requestDeserialize: deserialize_main_SensorRequest,
    responseSerialize: serialize_main_SensorResponse,
    responseDeserialize: deserialize_main_SensorResponse,
  },
};

exports.AsyncClient = grpc.makeGenericClientConstructor(AsyncService);
