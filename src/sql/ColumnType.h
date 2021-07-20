#ifndef SQLPARSER_COLUMN_TYPE_H
#define SQLPARSER_COLUMN_TYPE_H

#include <ostream>

namespace hsql {
  enum class DataType {
    UNKNOWN,
    INT,
    LONG,
    FLOAT,
    DOUBLE,
    DECIMAL,
    REAL,
    CHAR,
    VARCHAR,
    VARCHAR_VARYING,
    TEXT,
    DATETIME,
    DATE,
    TIME,
    DECIMAL,
    REAL,
    VARCHAR_VARYING,
  };

  // Represents the type of a column, e.g., FLOAT or VARCHAR(10)
  struct ColumnType {
    ColumnType() = default;
    ColumnType(DataType data_type, int64_t length = 0);
    DataType data_type;
    int64_t length;  // Used for, e.g., VARCHAR(10)
  };

  bool operator==(const ColumnType& lhs, const ColumnType& rhs);
  bool operator!=(const ColumnType& lhs, const ColumnType& rhs);
  std::ostream& operator<<(std::ostream&, const ColumnType&);

} // namespace hsql

#endif
