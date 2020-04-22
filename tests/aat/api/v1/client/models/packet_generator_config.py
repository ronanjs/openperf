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


class PacketGeneratorConfig(object):
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
        'duration': 'TrafficDuration',
        'load': 'TrafficLoad',
        'order': 'str',
        'traffic': 'list[TrafficDefinition]'
    }

    attribute_map = {
        'duration': 'duration',
        'load': 'load',
        'order': 'order',
        'traffic': 'traffic'
    }

    def __init__(self, duration=None, load=None, order=None, traffic=None):  # noqa: E501
        """PacketGeneratorConfig - a model defined in Swagger"""  # noqa: E501

        self._duration = None
        self._load = None
        self._order = None
        self._traffic = None
        self.discriminator = None

        self.duration = duration
        self.load = load
        if order is not None:
            self.order = order
        self.traffic = traffic

    @property
    def duration(self):
        """Gets the duration of this PacketGeneratorConfig.  # noqa: E501


        :return: The duration of this PacketGeneratorConfig.  # noqa: E501
        :rtype: TrafficDuration
        """
        return self._duration

    @duration.setter
    def duration(self, duration):
        """Sets the duration of this PacketGeneratorConfig.


        :param duration: The duration of this PacketGeneratorConfig.  # noqa: E501
        :type: TrafficDuration
        """
        self._duration = duration

    @property
    def load(self):
        """Gets the load of this PacketGeneratorConfig.  # noqa: E501


        :return: The load of this PacketGeneratorConfig.  # noqa: E501
        :rtype: TrafficLoad
        """
        return self._load

    @load.setter
    def load(self, load):
        """Sets the load of this PacketGeneratorConfig.


        :param load: The load of this PacketGeneratorConfig.  # noqa: E501
        :type: TrafficLoad
        """
        self._load = load

    @property
    def order(self):
        """Gets the order of this PacketGeneratorConfig.  # noqa: E501

        Tells the generator how to sequence multiple traffic definitions. Only needed if more than one traffic definition is present.   # noqa: E501

        :return: The order of this PacketGeneratorConfig.  # noqa: E501
        :rtype: str
        """
        return self._order

    @order.setter
    def order(self, order):
        """Sets the order of this PacketGeneratorConfig.

        Tells the generator how to sequence multiple traffic definitions. Only needed if more than one traffic definition is present.   # noqa: E501

        :param order: The order of this PacketGeneratorConfig.  # noqa: E501
        :type: str
        """
        self._order = order

    @property
    def traffic(self):
        """Gets the traffic of this PacketGeneratorConfig.  # noqa: E501

        List of traffic definitions  # noqa: E501

        :return: The traffic of this PacketGeneratorConfig.  # noqa: E501
        :rtype: list[TrafficDefinition]
        """
        return self._traffic

    @traffic.setter
    def traffic(self, traffic):
        """Sets the traffic of this PacketGeneratorConfig.

        List of traffic definitions  # noqa: E501

        :param traffic: The traffic of this PacketGeneratorConfig.  # noqa: E501
        :type: list[TrafficDefinition]
        """
        self._traffic = traffic

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
        if issubclass(PacketGeneratorConfig, dict):
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
        if not isinstance(other, PacketGeneratorConfig):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
