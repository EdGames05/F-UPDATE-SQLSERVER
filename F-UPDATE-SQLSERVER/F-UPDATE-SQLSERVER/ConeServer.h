#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class ConeServer
{
private:
	String^ cadeCone = "Persist Security Info=False;User ID=[usuario];Password=[contrasena];Initial Catalog=AdventureWorks;Server=[servidor]";
	SqlConnection^ cone;
	SqlDataReader^ data;
	SqlCommand^ mQuery;
	String^ msgError = "";
public:
	ConeServer(){}
	ConeServer(String^ servidor, String^ usuario, String^ contrasena)
	{
		cadeCone = cadeCone->Replace("[servidor]", servidor);
		cadeCone = cadeCone->Replace("[usuario]", usuario);
		cadeCone = cadeCone->Replace("[contrasena]", contrasena);
	}
	String^ getCadenaConexion() { return cadeCone; }
	SqlConnection^ getConexion() { return cone; }
	String^ getErrorMsg(){ return msgError; }
	bool estaConectado()
	{
		try
		{
			if (cone->State == ConnectionState::Open)
			{
				return true;
			}
			else
			{
				false;
			}
		}
		catch (SqlException^ ex)
		{
			msgError = ex->Message;
			return false;
		}
	}

	SqlConnection^ conectar(String^ servidor, String^ usuario, String^ contrasena)
	{
		if (servidor != "" && usuario != "" && contrasena != "")
		{
			throw gcnew System::ArgumentException("Las cadenas tienen que traer información.", "servidor, usuario, contrasena");
			return nullptr;
		}
		else
		{
			cadeCone = cadeCone->Replace("[servidor]", servidor);
			cadeCone = cadeCone->Replace("[usuario]", usuario);
			cadeCone = cadeCone->Replace("[contrasena]", contrasena);
			try 
			{
				cone = gcnew SqlConnection(cadeCone);
				cone->Open();
				return cone;
			}
			catch (SqlException^ ex)
			{
				msgError = ex->Message;
				return nullptr;
			}
		}
	}

	bool cerrarConexion()
	{
		if (cone->State == ConnectionState::Open)
		{
			try
			{
				cone->Close();
				return true;
			}
			catch (SqlException^ ex)
			{
				msgError = ex->Message;
				return false;
			}
		}
		else
		{
			return true;
		}
	}

	SqlDataReader^ consulta(String^ query)
	{
		if (estaConectado())
		{
			try
			{
				mQuery = gcnew SqlCommand(query, cone);
				data = mQuery->ExecuteReader();
				return data;
			}
			catch (SqlException^ ex)
			{
				msgError = ex->Message;
				return nullptr;
			}
		}
		else
		{
			msgError = "Conectese primero a una base de datos.";
			return nullptr;
		}
	}

	bool ejecutarScriptSql(String^ sql)
	{
		if (estaConectado())
		{
			try
			{
				mQuery = gcnew SqlCommand(sql, cone);
				mQuery->ExecuteNonQuery();
				return true;
			}
			catch (SqlException^ ex)
			{
				msgError = ex->Message;
				return nullptr;
			}
		}
		else
		{
			msgError = "Conectese primero a una base de datos.";
			return false;
		}
	}

};

