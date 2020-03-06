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


class TrafficProtocolMacModifierSequence(object):
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
        'count': 'int',
        'start': 'MacAddress',
        'stop': 'MacAddress',
        'skip': 'list[MacAddress]'
    }

    attribute_map = {
        'count': 'count',
        'start': 'start',
        'stop': 'stop',
        'skip': 'skip'
    }

    def __init__(self, count=None, start=None, stop=None, skip=None):  # noqa: E501
        """TrafficProtocolMacModifierSequence - a model defined in Swagger"""  # noqa: E501

        self._count = None
        self._start = None
        self._stop = None
        self._skip = None
        self.discriminator = None

        self.count = count
        self.start = start
        if stop is not None:
            self.stop = stop
        if skip is not None:
            self.skip = skip

    @property
    def count(self):
        """Gets the count of this TrafficProtocolMacModifierSequence.  # noqa: E501

        The number of addresses in the sequence  # noqa: E501

        :return: The count of this TrafficProtocolMacModifierSequence.  # noqa: E501
        :rtype: int
        """
        return self._count

    @count.setter
    def count(self, count):
        """Sets the count of this TrafficProtocolMacModifierSequence.

        The number of addresses in the sequence  # noqa: E501

        :param count: The count of this TrafficProtocolMacModifierSequence.  # noqa: E501
        :type: int
        """
        self._count = count

    @property
    def start(self):
        """Gets the start of this TrafficProtocolMacModifierSequence.  # noqa: E501


        :return: The start of this TrafficProtocolMacModifierSequence.  # noqa: E501
        :rtype: MacAddress
        """
        return self._start

    @start.setter
    def start(self, start):
        """Sets the start of this TrafficProtocolMacModifierSequence.


        :param start: The start of this TrafficProtocolMacModifierSequence.  # noqa: E501
        :type: MacAddress
        """
        self._start = start

    @property
    def stop(self):
        """Gets the stop of this TrafficProtocolMacModifierSequence.  # noqa: E501


        :return: The stop of this TrafficProtocolMacModifierSequence.  # noqa: E501
        :rtype: MacAddress
        """
        return self._stop

    @stop.setter
    def stop(self, stop):
        """Sets the stop of this TrafficProtocolMacModifierSequence.


        :param stop: The stop of this TrafficProtocolMacModifierSequence.  # noqa: E501
        :type: MacAddress
        """
        self._stop = stop

    @property
    def skip(self):
        """Gets the skip of this TrafficProtocolMacModifierSequence.  # noqa: E501

        List of addresses in the sequence to skip  # noqa: E501

        :return: The skip of this TrafficProtocolMacModifierSequence.  # noqa: E501
        :rtype: list[MacAddress]
        """
        return self._skip

    @skip.setter
    def skip(self, skip):
        """Sets the skip of this TrafficProtocolMacModifierSequence.

        List of addresses in the sequence to skip  # noqa: E501

        :param skip: The skip of this TrafficProtocolMacModifierSequence.  # noqa: E501
        :type: list[MacAddress]
        """
        self._skip = skip

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
        if issubclass(TrafficProtocolMacModifierSequence, dict):
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
        if not isinstance(other, TrafficProtocolMacModifierSequence):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
