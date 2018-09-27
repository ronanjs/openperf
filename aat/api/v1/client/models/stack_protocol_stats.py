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


class StackProtocolStats(object):
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
        'tx_packets': 'int',
        'rx_packets': 'int',
        'forwarded_packets': 'int',
        'dropped_packets': 'int',
        'checksum_errors': 'int',
        'length_errors': 'int',
        'memory_errors': 'int',
        'routing_errors': 'int',
        'protocol_errors': 'int',
        'option_errors': 'int',
        'misc_errors': 'int',
        'cache_hits': 'int'
    }

    attribute_map = {
        'tx_packets': 'tx_packets',
        'rx_packets': 'rx_packets',
        'forwarded_packets': 'forwarded_packets',
        'dropped_packets': 'dropped_packets',
        'checksum_errors': 'checksum_errors',
        'length_errors': 'length_errors',
        'memory_errors': 'memory_errors',
        'routing_errors': 'routing_errors',
        'protocol_errors': 'protocol_errors',
        'option_errors': 'option_errors',
        'misc_errors': 'misc_errors',
        'cache_hits': 'cache_hits'
    }

    def __init__(self, tx_packets=None, rx_packets=None, forwarded_packets=None, dropped_packets=None, checksum_errors=None, length_errors=None, memory_errors=None, routing_errors=None, protocol_errors=None, option_errors=None, misc_errors=None, cache_hits=None):  # noqa: E501
        """StackProtocolStats - a model defined in Swagger"""  # noqa: E501

        self._tx_packets = None
        self._rx_packets = None
        self._forwarded_packets = None
        self._dropped_packets = None
        self._checksum_errors = None
        self._length_errors = None
        self._memory_errors = None
        self._routing_errors = None
        self._protocol_errors = None
        self._option_errors = None
        self._misc_errors = None
        self._cache_hits = None
        self.discriminator = None

        self.tx_packets = tx_packets
        self.rx_packets = rx_packets
        self.forwarded_packets = forwarded_packets
        self.dropped_packets = dropped_packets
        self.checksum_errors = checksum_errors
        self.length_errors = length_errors
        self.memory_errors = memory_errors
        self.routing_errors = routing_errors
        self.protocol_errors = protocol_errors
        self.option_errors = option_errors
        self.misc_errors = misc_errors
        self.cache_hits = cache_hits

    @property
    def tx_packets(self):
        """Gets the tx_packets of this StackProtocolStats.  # noqa: E501

        Transmitted packets  # noqa: E501

        :return: The tx_packets of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._tx_packets

    @tx_packets.setter
    def tx_packets(self, tx_packets):
        """Sets the tx_packets of this StackProtocolStats.

        Transmitted packets  # noqa: E501

        :param tx_packets: The tx_packets of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if tx_packets is None:
            raise ValueError("Invalid value for `tx_packets`, must not be `None`")  # noqa: E501

        self._tx_packets = tx_packets

    @property
    def rx_packets(self):
        """Gets the rx_packets of this StackProtocolStats.  # noqa: E501

        Received packets  # noqa: E501

        :return: The rx_packets of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._rx_packets

    @rx_packets.setter
    def rx_packets(self, rx_packets):
        """Sets the rx_packets of this StackProtocolStats.

        Received packets  # noqa: E501

        :param rx_packets: The rx_packets of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if rx_packets is None:
            raise ValueError("Invalid value for `rx_packets`, must not be `None`")  # noqa: E501

        self._rx_packets = rx_packets

    @property
    def forwarded_packets(self):
        """Gets the forwarded_packets of this StackProtocolStats.  # noqa: E501

        Forwarded packets  # noqa: E501

        :return: The forwarded_packets of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._forwarded_packets

    @forwarded_packets.setter
    def forwarded_packets(self, forwarded_packets):
        """Sets the forwarded_packets of this StackProtocolStats.

        Forwarded packets  # noqa: E501

        :param forwarded_packets: The forwarded_packets of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if forwarded_packets is None:
            raise ValueError("Invalid value for `forwarded_packets`, must not be `None`")  # noqa: E501

        self._forwarded_packets = forwarded_packets

    @property
    def dropped_packets(self):
        """Gets the dropped_packets of this StackProtocolStats.  # noqa: E501

        Dropped packets  # noqa: E501

        :return: The dropped_packets of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._dropped_packets

    @dropped_packets.setter
    def dropped_packets(self, dropped_packets):
        """Sets the dropped_packets of this StackProtocolStats.

        Dropped packets  # noqa: E501

        :param dropped_packets: The dropped_packets of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if dropped_packets is None:
            raise ValueError("Invalid value for `dropped_packets`, must not be `None`")  # noqa: E501

        self._dropped_packets = dropped_packets

    @property
    def checksum_errors(self):
        """Gets the checksum_errors of this StackProtocolStats.  # noqa: E501

        Checksum errors  # noqa: E501

        :return: The checksum_errors of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._checksum_errors

    @checksum_errors.setter
    def checksum_errors(self, checksum_errors):
        """Sets the checksum_errors of this StackProtocolStats.

        Checksum errors  # noqa: E501

        :param checksum_errors: The checksum_errors of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if checksum_errors is None:
            raise ValueError("Invalid value for `checksum_errors`, must not be `None`")  # noqa: E501

        self._checksum_errors = checksum_errors

    @property
    def length_errors(self):
        """Gets the length_errors of this StackProtocolStats.  # noqa: E501

        Invalid length errors  # noqa: E501

        :return: The length_errors of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._length_errors

    @length_errors.setter
    def length_errors(self, length_errors):
        """Sets the length_errors of this StackProtocolStats.

        Invalid length errors  # noqa: E501

        :param length_errors: The length_errors of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if length_errors is None:
            raise ValueError("Invalid value for `length_errors`, must not be `None`")  # noqa: E501

        self._length_errors = length_errors

    @property
    def memory_errors(self):
        """Gets the memory_errors of this StackProtocolStats.  # noqa: E501

        Out of memory errors  # noqa: E501

        :return: The memory_errors of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._memory_errors

    @memory_errors.setter
    def memory_errors(self, memory_errors):
        """Sets the memory_errors of this StackProtocolStats.

        Out of memory errors  # noqa: E501

        :param memory_errors: The memory_errors of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if memory_errors is None:
            raise ValueError("Invalid value for `memory_errors`, must not be `None`")  # noqa: E501

        self._memory_errors = memory_errors

    @property
    def routing_errors(self):
        """Gets the routing_errors of this StackProtocolStats.  # noqa: E501

        Routing errors  # noqa: E501

        :return: The routing_errors of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._routing_errors

    @routing_errors.setter
    def routing_errors(self, routing_errors):
        """Sets the routing_errors of this StackProtocolStats.

        Routing errors  # noqa: E501

        :param routing_errors: The routing_errors of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if routing_errors is None:
            raise ValueError("Invalid value for `routing_errors`, must not be `None`")  # noqa: E501

        self._routing_errors = routing_errors

    @property
    def protocol_errors(self):
        """Gets the protocol_errors of this StackProtocolStats.  # noqa: E501

        Protocol error  # noqa: E501

        :return: The protocol_errors of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._protocol_errors

    @protocol_errors.setter
    def protocol_errors(self, protocol_errors):
        """Sets the protocol_errors of this StackProtocolStats.

        Protocol error  # noqa: E501

        :param protocol_errors: The protocol_errors of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if protocol_errors is None:
            raise ValueError("Invalid value for `protocol_errors`, must not be `None`")  # noqa: E501

        self._protocol_errors = protocol_errors

    @property
    def option_errors(self):
        """Gets the option_errors of this StackProtocolStats.  # noqa: E501

        Errors in options  # noqa: E501

        :return: The option_errors of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._option_errors

    @option_errors.setter
    def option_errors(self, option_errors):
        """Sets the option_errors of this StackProtocolStats.

        Errors in options  # noqa: E501

        :param option_errors: The option_errors of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if option_errors is None:
            raise ValueError("Invalid value for `option_errors`, must not be `None`")  # noqa: E501

        self._option_errors = option_errors

    @property
    def misc_errors(self):
        """Gets the misc_errors of this StackProtocolStats.  # noqa: E501

        Miscellaneous errors  # noqa: E501

        :return: The misc_errors of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._misc_errors

    @misc_errors.setter
    def misc_errors(self, misc_errors):
        """Sets the misc_errors of this StackProtocolStats.

        Miscellaneous errors  # noqa: E501

        :param misc_errors: The misc_errors of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if misc_errors is None:
            raise ValueError("Invalid value for `misc_errors`, must not be `None`")  # noqa: E501

        self._misc_errors = misc_errors

    @property
    def cache_hits(self):
        """Gets the cache_hits of this StackProtocolStats.  # noqa: E501

        Cache hits  # noqa: E501

        :return: The cache_hits of this StackProtocolStats.  # noqa: E501
        :rtype: int
        """
        return self._cache_hits

    @cache_hits.setter
    def cache_hits(self, cache_hits):
        """Sets the cache_hits of this StackProtocolStats.

        Cache hits  # noqa: E501

        :param cache_hits: The cache_hits of this StackProtocolStats.  # noqa: E501
        :type: int
        """
        if cache_hits is None:
            raise ValueError("Invalid value for `cache_hits`, must not be `None`")  # noqa: E501

        self._cache_hits = cache_hits

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
        if not isinstance(other, StackProtocolStats):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
