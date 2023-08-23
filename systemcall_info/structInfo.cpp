#include "./../header_file/structInfo.h"

StructInfo::StructInfo(/* args */)
{
    this->struct_collector = {0};
}
StructInfo::~StructInfo()
{
}

void StructInfo::first_function()
{
    cout << "hello structInfo class" << endl;
}