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


class StackElementStats(object):
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
        'used': 'int',
        'max': 'int',
        'errors': 'int'
    }

    attribute_map = {
        'used': 'used',
        'max': 'max',
        'errors': 'errors'
    }

    def __init__(self, used=None, max=None, errors=None):  # noqa: E501
        """StackElementStats - a model defined in Swagger"""  # noqa: E501

        self._used = None
        self._max = None
        self._errors = None
        self.discriminator = None

        self.used = used
        self.max = max
        self.errors = errors

    @property
    def used(self):
        """Gets the used of this StackElementStats.  # noqa: E501

        Used (elements)  # noqa: E501

        :return: The used of this StackElementStats.  # noqa: E501
        :rtype: int
        """
        return self._used

    @used.setter
    def used(self, used):
        """Sets the used of this StackElementStats.

        Used (elements)  # noqa: E501

        :param used: The used of this StackElementStats.  # noqa: E501
        :type: int
        """
        if used is None:
            raise ValueError("Invalid value for `used`, must not be `None`")  # noqa: E501

        self._used = used

    @property
    def max(self):
        """Gets the max of this StackElementStats.  # noqa: E501

        Maximum (elements)  # noqa: E501

        :return: The max of this StackElementStats.  # noqa: E501
        :rtype: int
        """
        return self._max

    @max.setter
    def max(self, max):
        """Sets the max of this StackElementStats.

        Maximum (elements)  # noqa: E501

        :param max: The max of this StackElementStats.  # noqa: E501
        :type: int
        """
        if max is None:
            raise ValueError("Invalid value for `max`, must not be `None`")  # noqa: E501

        self._max = max

    @property
    def errors(self):
        """Gets the errors of this StackElementStats.  # noqa: E501

        Errors (count)  # noqa: E501

        :return: The errors of this StackElementStats.  # noqa: E501
        :rtype: int
        """
        return self._errors

    @errors.setter
    def errors(self, errors):
        """Sets the errors of this StackElementStats.

        Errors (count)  # noqa: E501

        :param errors: The errors of this StackElementStats.  # noqa: E501
        :type: int
        """
        if errors is None:
            raise ValueError("Invalid value for `errors`, must not be `None`")  # noqa: E501

        self._errors = errors

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
        if not isinstance(other, StackElementStats):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
