#pragma once

using namespace System;

ref class Funciones
{
private:
	Funciones(){}
public:
	static String^ reemplazarstr(String^ reemplazarEn, String^ viejo, String^ nuevo)
	{
		return reemplazarEn->Replace(viejo, nuevo);
	}
};

