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


class TimeSourceStatsNtp(object):
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
        'rx_packets': 'int',
        'tx_packets': 'int'
    }

    attribute_map = {
        'rx_packets': 'rx_packets',
        'tx_packets': 'tx_packets'
    }

    def __init__(self, rx_packets=None, tx_packets=None):  # noqa: E501
        """TimeSourceStatsNtp - a model defined in Swagger"""  # noqa: E501

        self._rx_packets = None
        self._tx_packets = None
        self.discriminator = None

        self.rx_packets = rx_packets
        self.tx_packets = tx_packets

    @property
    def rx_packets(self):
        """Gets the rx_packets of this TimeSourceStatsNtp.  # noqa: E501

        Received packets  # noqa: E501

        :return: The rx_packets of this TimeSourceStatsNtp.  # noqa: E501
        :rtype: int
        """
        return self._rx_packets

    @rx_packets.setter
    def rx_packets(self, rx_packets):
        """Sets the rx_packets of this TimeSourceStatsNtp.

        Received packets  # noqa: E501

        :param rx_packets: The rx_packets of this TimeSourceStatsNtp.  # noqa: E501
        :type: int
        """
        self._rx_packets = rx_packets

    @property
    def tx_packets(self):
        """Gets the tx_packets of this TimeSourceStatsNtp.  # noqa: E501

        Transmitted packets  # noqa: E501

        :return: The tx_packets of this TimeSourceStatsNtp.  # noqa: E501
        :rtype: int
        """
        return self._tx_packets

    @tx_packets.setter
    def tx_packets(self, tx_packets):
        """Sets the tx_packets of this TimeSourceStatsNtp.

        Transmitted packets  # noqa: E501

        :param tx_packets: The tx_packets of this TimeSourceStatsNtp.  # noqa: E501
        :type: int
        """
        self._tx_packets = tx_packets

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
        if not isinstance(other, TimeSourceStatsNtp):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
