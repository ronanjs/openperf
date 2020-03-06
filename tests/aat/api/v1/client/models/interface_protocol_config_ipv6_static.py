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


class InterfaceProtocolConfigIpv6Static(object):
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
        'address': 'str',
        'prefix_length': 'int',
        'gateway': 'str'
    }

    attribute_map = {
        'address': 'address',
        'prefix_length': 'prefix_length',
        'gateway': 'gateway'
    }

    def __init__(self, address=None, prefix_length=None, gateway=None):  # noqa: E501
        """InterfaceProtocolConfigIpv6Static - a model defined in Swagger"""  # noqa: E501

        self._address = None
        self._prefix_length = None
        self._gateway = None
        self.discriminator = None

        self.address = address
        self.prefix_length = prefix_length
        if gateway is not None:
            self.gateway = gateway

    @property
    def address(self):
        """Gets the address of this InterfaceProtocolConfigIpv6Static.  # noqa: E501

        IPv6 address  # noqa: E501

        :return: The address of this InterfaceProtocolConfigIpv6Static.  # noqa: E501
        :rtype: str
        """
        return self._address

    @address.setter
    def address(self, address):
        """Sets the address of this InterfaceProtocolConfigIpv6Static.

        IPv6 address  # noqa: E501

        :param address: The address of this InterfaceProtocolConfigIpv6Static.  # noqa: E501
        :type: str
        """
        self._address = address

    @property
    def prefix_length(self):
        """Gets the prefix_length of this InterfaceProtocolConfigIpv6Static.  # noqa: E501

        Prefix length  # noqa: E501

        :return: The prefix_length of this InterfaceProtocolConfigIpv6Static.  # noqa: E501
        :rtype: int
        """
        return self._prefix_length

    @prefix_length.setter
    def prefix_length(self, prefix_length):
        """Sets the prefix_length of this InterfaceProtocolConfigIpv6Static.

        Prefix length  # noqa: E501

        :param prefix_length: The prefix_length of this InterfaceProtocolConfigIpv6Static.  # noqa: E501
        :type: int
        """
        self._prefix_length = prefix_length

    @property
    def gateway(self):
        """Gets the gateway of this InterfaceProtocolConfigIpv6Static.  # noqa: E501

        Default gateway  # noqa: E501

        :return: The gateway of this InterfaceProtocolConfigIpv6Static.  # noqa: E501
        :rtype: str
        """
        return self._gateway

    @gateway.setter
    def gateway(self, gateway):
        """Sets the gateway of this InterfaceProtocolConfigIpv6Static.

        Default gateway  # noqa: E501

        :param gateway: The gateway of this InterfaceProtocolConfigIpv6Static.  # noqa: E501
        :type: str
        """
        self._gateway = gateway

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
        if issubclass(InterfaceProtocolConfigIpv6Static, dict):
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
        if not isinstance(other, InterfaceProtocolConfigIpv6Static):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
