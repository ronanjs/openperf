# coding: utf-8

"""
    OpenPerf API

    REST API interface for OpenPerf  # noqa: E501

    OpenAPI spec version: 1
    Contact: support@spirent.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six


class InterfaceProtocolConfigIpv4(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'method': 'str',
        'static': 'InterfaceProtocolConfigIpv4Static',
        'dhcp': 'InterfaceProtocolConfigIpv4Dhcp'
    }

    attribute_map = {
        'method': 'method',
        'static': 'static',
        'dhcp': 'dhcp'
    }

    def __init__(self, method=None, static=None, dhcp=None):  # noqa: E501
        """InterfaceProtocolConfigIpv4 - a model defined in Swagger"""  # noqa: E501

        self._method = None
        self._static = None
        self._dhcp = None
        self.discriminator = None

        self.method = method
        if static is not None:
            self.static = static
        if dhcp is not None:
            self.dhcp = dhcp

    @property
    def method(self):
        """Gets the method of this InterfaceProtocolConfigIpv4.  # noqa: E501

        Configuration method  # noqa: E501

        :return: The method of this InterfaceProtocolConfigIpv4.  # noqa: E501
        :rtype: str
        """
        return self._method

    @method.setter
    def method(self, method):
        """Sets the method of this InterfaceProtocolConfigIpv4.

        Configuration method  # noqa: E501

        :param method: The method of this InterfaceProtocolConfigIpv4.  # noqa: E501
        :type: str
        """
        self._method = method

    @property
    def static(self):
        """Gets the static of this InterfaceProtocolConfigIpv4.  # noqa: E501


        :return: The static of this InterfaceProtocolConfigIpv4.  # noqa: E501
        :rtype: InterfaceProtocolConfigIpv4Static
        """
        return self._static

    @static.setter
    def static(self, static):
        """Sets the static of this InterfaceProtocolConfigIpv4.


        :param static: The static of this InterfaceProtocolConfigIpv4.  # noqa: E501
        :type: InterfaceProtocolConfigIpv4Static
        """
        self._static = static

    @property
    def dhcp(self):
        """Gets the dhcp of this InterfaceProtocolConfigIpv4.  # noqa: E501


        :return: The dhcp of this InterfaceProtocolConfigIpv4.  # noqa: E501
        :rtype: InterfaceProtocolConfigIpv4Dhcp
        """
        return self._dhcp

    @dhcp.setter
    def dhcp(self, dhcp):
        """Sets the dhcp of this InterfaceProtocolConfigIpv4.


        :param dhcp: The dhcp of this InterfaceProtocolConfigIpv4.  # noqa: E501
        :type: InterfaceProtocolConfigIpv4Dhcp
        """
        self._dhcp = dhcp

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(InterfaceProtocolConfigIpv4, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, InterfaceProtocolConfigIpv4):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
