#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class ConeServer
{
private:
	String^ cadeCone = "Persist Security Info=False;User ID=[usuario];Password=[contrasena];Initial Catalog=[nombreBd];Server=[servidor]";
	SqlConnection^ cone;
	SqlDataReader^ data;
	SqlCommand^ mQuery;
	String^ msgError = "";
	bool esConectado = false;
public:
	ConeServer(){}
	ConeServer(String^ servidor, String^ usuario, String^ contrasena, String^ nombreBd)
	{
		cadeCone = "Persist Security Info=False;User ID=" + usuario + ";Password=" + contrasena + ";Initial Catalog=" + nombreBd + ";Server=" + servidor + ";";
	}
	String^ getCadenaConexion() { return cadeCone; }
	SqlConnection^ getConexion() { return cone; }
	String^ getErrorMsg(){ return msgError; }
	bool estaConectado() { return esConectado; }

	SqlConnection^ conectar(String^ servidor, String^ usuario, String^ contrasena, String^ nombreBd)
	{
		if (servidor == "" && usuario == "" && contrasena == "")
		{
			throw gcnew System::ArgumentException("Las cadenas tienen que traer información.", "servidor, usuario, contrasena, nombreBd");
			esConectado = false;
			return nullptr;
		}
		else
		{
			cadeCone = "Persist Security Info=False;User ID=" + usuario + ";Password=" + contrasena + ";Initial Catalog=" + nombreBd + ";Server=" + servidor + ";";
			try 
			{
				cone = gcnew SqlConnection(cadeCone);
				cone->Open();
				esConectado = true;
				return cone;
			}
			catch (SqlException^ ex)
			{
				msgError = ex->Message;
				esConectado = false;
				return nullptr;
			}
		}
	}

	bool cerrarConexion()
	{
		try
		{
			cone->Close();
			esConectado = false;
			return true;
		}
		catch (SqlException^ ex)
		{
			msgError = ex->Message;
			esConectado = false;
			return false;
		}
	}

	SqlDataReader^ consulta(String^ query)
	{
		if (esConectado)
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
		if (esConectado)
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

