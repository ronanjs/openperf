# coding: utf-8

"""
    Inception Core API

    REST API interface to the Inception Core  # noqa: E501

    OpenAPI spec version: 1
    Contact: support@spirent.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six


class PortDriverHost(object):
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
        'device_name': 'str'
    }

    attribute_map = {
        'device_name': 'device_name'
    }

    def __init__(self, device_name=None):  # noqa: E501
        """PortDriverHost - a model defined in Swagger"""  # noqa: E501

        self._device_name = None
        self.discriminator = None

        self.device_name = device_name

    @property
    def device_name(self):
        """Gets the device_name of this PortDriverHost.  # noqa: E501

        Host device name  # noqa: E501

        :return: The device_name of this PortDriverHost.  # noqa: E501
        :rtype: str
        """
        return self._device_name

    @device_name.setter
    def device_name(self, device_name):
        """Sets the device_name of this PortDriverHost.

        Host device name  # noqa: E501

        :param device_name: The device_name of this PortDriverHost.  # noqa: E501
        :type: str
        """
        if device_name is None:
            raise ValueError("Invalid value for `device_name`, must not be `None`")  # noqa: E501

        self._device_name = device_name

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

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, PortDriverHost):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
