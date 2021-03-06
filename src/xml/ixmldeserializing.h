#ifndef QTXXML_IXMLDESERIALIZING_H
#define QTXXML_IXMLDESERIALIZING_H

#include "xmlglobal.h"
#include <QtCore>

QTX_BEGIN_NAMESPACE


class IXmlDeserializing
{
public:
    virtual ~IXmlDeserializing() {};
        
    virtual IXmlDeserializing *deserializeXmlStartElement(XmlDeserializer * deserializer, const QStringRef & namespaceUri, const QStringRef & name, const QXmlStreamAttributes & attributes)
    {
        Q_UNUSED(deserializer)
        Q_UNUSED(namespaceUri)
        Q_UNUSED(name)
        Q_UNUSED(attributes)
        return 0;
    }
    
    virtual void deserializeXmlEndElement(XmlDeserializer *deserializer, const QStringRef & namespaceUri, const QStringRef & name)
    {
        Q_UNUSED(deserializer)
        Q_UNUSED(namespaceUri)
        Q_UNUSED(name)
    } 
    
    virtual void deserializeXmlAttributes(XmlDeserializer *deserializer, const QXmlStreamAttributes & attributes)
    {
        Q_UNUSED(deserializer)
        Q_UNUSED(attributes)
    }
    
    virtual void deserializeXmlCharacters(XmlDeserializer *deserializer, const QStringRef & text)
    {
        Q_UNUSED(deserializer)
        Q_UNUSED(text)
    }
};


QTX_END_NAMESPACE

#endif // QTXXML_IXMLDESERIALIZING_H
