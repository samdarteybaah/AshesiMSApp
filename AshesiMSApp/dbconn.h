#pragma once

using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

namespace AshesiMSApp {
    public ref class DatabaseConnection {
    public:
        static MySqlConnection^ GetConnection() {
            String^ ConnectionString = "datasource=localhost; port=4306; username=root; password=""; database = ashesims; SslMode=None;";
            return gcnew MySqlConnection(ConnectionString);
        }
    };
}
