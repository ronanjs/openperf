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


class PacketProtocolIpv6(object):
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
        'destination': 'str',
        'flow_label': 'int',
        'hop_limit': 'int',
        'next_header': 'int',
        'payload_length': 'int',
        'source': 'str',
        'traffic_class': 'int',
        'version': 'int'
    }

    attribute_map = {
        'destination': 'destination',
        'flow_label': 'flow_label',
        'hop_limit': 'hop_limit',
        'next_header': 'next_header',
        'payload_length': 'payload_length',
        'source': 'source',
        'traffic_class': 'traffic_class',
        'version': 'version'
    }

    def __init__(self, destination=None, flow_label=None, hop_limit=None, next_header=None, payload_length=None, source=None, traffic_class=None, version=None):  # noqa: E501
        """PacketProtocolIpv6 - a model defined in Swagger"""  # noqa: E501

        self._destination = None
        self._flow_label = None
        self._hop_limit = None
        self._next_header = None
        self._payload_length = None
        self._source = None
        self._traffic_class = None
        self._version = None
        self.discriminator = None

        if destination is not None:
            self.destination = destination
        if flow_label is not None:
            self.flow_label = flow_label
        if hop_limit is not None:
            self.hop_limit = hop_limit
        if next_header is not None:
            self.next_header = next_header
        if payload_length is not None:
            self.payload_length = payload_length
        if source is not None:
            self.source = source
        if traffic_class is not None:
            self.traffic_class = traffic_class
        if version is not None:
            self.version = version

    @property
    def destination(self):
        """Gets the destination of this PacketProtocolIpv6.  # noqa: E501

        IPv6 destination address  # noqa: E501

        :return: The destination of this PacketProtocolIpv6.  # noqa: E501
        :rtype: str
        """
        return self._destination

    @destination.setter
    def destination(self, destination):
        """Sets the destination of this PacketProtocolIpv6.

        IPv6 destination address  # noqa: E501

        :param destination: The destination of this PacketProtocolIpv6.  # noqa: E501
        :type: str
        """
        self._destination = destination

    @property
    def flow_label(self):
        """Gets the flow_label of this PacketProtocolIpv6.  # noqa: E501

        IPv6 flow label  # noqa: E501

        :return: The flow_label of this PacketProtocolIpv6.  # noqa: E501
        :rtype: int
        """
        return self._flow_label

    @flow_label.setter
    def flow_label(self, flow_label):
        """Sets the flow_label of this PacketProtocolIpv6.

        IPv6 flow label  # noqa: E501

        :param flow_label: The flow_label of this PacketProtocolIpv6.  # noqa: E501
        :type: int
        """
        self._flow_label = flow_label

    @property
    def hop_limit(self):
        """Gets the hop_limit of this PacketProtocolIpv6.  # noqa: E501

        IPv6 hop limit  # noqa: E501

        :return: The hop_limit of this PacketProtocolIpv6.  # noqa: E501
        :rtype: int
        """
        return self._hop_limit

    @hop_limit.setter
    def hop_limit(self, hop_limit):
        """Sets the hop_limit of this PacketProtocolIpv6.

        IPv6 hop limit  # noqa: E501

        :param hop_limit: The hop_limit of this PacketProtocolIpv6.  # noqa: E501
        :type: int
        """
        self._hop_limit = hop_limit

    @property
    def next_header(self):
        """Gets the next_header of this PacketProtocolIpv6.  # noqa: E501

        IPv6 next header  # noqa: E501

        :return: The next_header of this PacketProtocolIpv6.  # noqa: E501
        :rtype: int
        """
        return self._next_header

    @next_header.setter
    def next_header(self, next_header):
        """Sets the next_header of this PacketProtocolIpv6.

        IPv6 next header  # noqa: E501

        :param next_header: The next_header of this PacketProtocolIpv6.  # noqa: E501
        :type: int
        """
        self._next_header = next_header

    @property
    def payload_length(self):
        """Gets the payload_length of this PacketProtocolIpv6.  # noqa: E501

        IPv6 payload length  # noqa: E501

        :return: The payload_length of this PacketProtocolIpv6.  # noqa: E501
        :rtype: int
        """
        return self._payload_length

    @payload_length.setter
    def payload_length(self, payload_length):
        """Sets the payload_length of this PacketProtocolIpv6.

        IPv6 payload length  # noqa: E501

        :param payload_length: The payload_length of this PacketProtocolIpv6.  # noqa: E501
        :type: int
        """
        self._payload_length = payload_length

    @property
    def source(self):
        """Gets the source of this PacketProtocolIpv6.  # noqa: E501

        IPv6 source address  # noqa: E501

        :return: The source of this PacketProtocolIpv6.  # noqa: E501
        :rtype: str
        """
        return self._source

    @source.setter
    def source(self, source):
        """Sets the source of this PacketProtocolIpv6.

        IPv6 source address  # noqa: E501

        :param source: The source of this PacketProtocolIpv6.  # noqa: E501
        :type: str
        """
        self._source = source

    @property
    def traffic_class(self):
        """Gets the traffic_class of this PacketProtocolIpv6.  # noqa: E501

        IPv6 traffic class  # noqa: E501

        :return: The traffic_class of this PacketProtocolIpv6.  # noqa: E501
        :rtype: int
        """
        return self._traffic_class

    @traffic_class.setter
    def traffic_class(self, traffic_class):
        """Sets the traffic_class of this PacketProtocolIpv6.

        IPv6 traffic class  # noqa: E501

        :param traffic_class: The traffic_class of this PacketProtocolIpv6.  # noqa: E501
        :type: int
        """
        self._traffic_class = traffic_class

    @property
    def version(self):
        """Gets the version of this PacketProtocolIpv6.  # noqa: E501

        IPv6 version  # noqa: E501

        :return: The version of this PacketProtocolIpv6.  # noqa: E501
        :rtype: int
        """
        return self._version

    @version.setter
    def version(self, version):
        """Sets the version of this PacketProtocolIpv6.

        IPv6 version  # noqa: E501

        :param version: The version of this PacketProtocolIpv6.  # noqa: E501
        :type: int
        """
        self._version = version

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
        if issubclass(PacketProtocolIpv6, dict):
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
        if not isinstance(other, PacketProtocolIpv6):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
