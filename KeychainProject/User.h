#pragma once

using namespace System;

public ref class User {
public: 
	String^ username;
	String^ password;
	String^ selected_cat = "nothing_yet";
};