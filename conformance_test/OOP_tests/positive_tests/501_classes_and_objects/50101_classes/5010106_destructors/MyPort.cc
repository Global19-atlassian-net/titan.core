// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 7/CAX 105 7730 R2A
// for Global Warning (james00@GlobalWarning1) on Tue Nov 10 10:16:29 2020

// Copyright (c) 2000-2020 Ericsson Telecom AB

// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "MyPort.hh"

namespace Sem__5010106__Destructors__001 {

MyPort::MyPort(const char *par_port_name)
	: MyPort_BASE(par_port_name)
{

}

MyPort::~MyPort()
{

}

void MyPort::set_parameter(const char * /*parameter_name*/,
	const char * /*parameter_value*/)
{

}

/*void MyPort::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void MyPort::Handle_Fd_Event_Error(int /*fd*/)
{

}

void MyPort::Handle_Fd_Event_Writable(int /*fd*/)
{

}

void MyPort::Handle_Fd_Event_Readable(int /*fd*/)
{

}

/*void MyPort::Handle_Timeout(double time_since_last_call) {}*/

void MyPort::user_map(const char * /*system_port*/, Map_Params& /*params*/)
{

}

void MyPort::user_unmap(const char * /*system_port*/, Map_Params& /*params*/)
{

}

void MyPort::user_start()
{

}

void MyPort::user_stop()
{

}

void MyPort::outgoing_send(const INTEGER& /*send_par*/)
{

}

} /* end of namespace */
