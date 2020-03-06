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


class PacketGenerator(object):
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
        'id': 'str',
        'target_id': 'str',
        'active': 'bool',
        'config': 'PacketGeneratorConfig'
    }

    attribute_map = {
        'id': 'id',
        'target_id': 'target_id',
        'active': 'active',
        'config': 'config'
    }

    def __init__(self, id=None, target_id=None, active=None, config=None):  # noqa: E501
        """PacketGenerator - a model defined in Swagger"""  # noqa: E501

        self._id = None
        self._target_id = None
        self._active = None
        self._config = None
        self.discriminator = None

        self.id = id
        self.target_id = target_id
        self.active = active
        self.config = config

    @property
    def id(self):
        """Gets the id of this PacketGenerator.  # noqa: E501

        Unique generator identifier  # noqa: E501

        :return: The id of this PacketGenerator.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this PacketGenerator.

        Unique generator identifier  # noqa: E501

        :param id: The id of this PacketGenerator.  # noqa: E501
        :type: str
        """
        self._id = id

    @property
    def target_id(self):
        """Gets the target_id of this PacketGenerator.  # noqa: E501

        Specifies the unique target for packets from this generator. This id may refer to either a port or an interface id.   # noqa: E501

        :return: The target_id of this PacketGenerator.  # noqa: E501
        :rtype: str
        """
        return self._target_id

    @target_id.setter
    def target_id(self, target_id):
        """Sets the target_id of this PacketGenerator.

        Specifies the unique target for packets from this generator. This id may refer to either a port or an interface id.   # noqa: E501

        :param target_id: The target_id of this PacketGenerator.  # noqa: E501
        :type: str
        """
        self._target_id = target_id

    @property
    def active(self):
        """Gets the active of this PacketGenerator.  # noqa: E501

        Indicates whether this object is currently generating packets or not.   # noqa: E501

        :return: The active of this PacketGenerator.  # noqa: E501
        :rtype: bool
        """
        return self._active

    @active.setter
    def active(self, active):
        """Sets the active of this PacketGenerator.

        Indicates whether this object is currently generating packets or not.   # noqa: E501

        :param active: The active of this PacketGenerator.  # noqa: E501
        :type: bool
        """
        self._active = active

    @property
    def config(self):
        """Gets the config of this PacketGenerator.  # noqa: E501


        :return: The config of this PacketGenerator.  # noqa: E501
        :rtype: PacketGeneratorConfig
        """
        return self._config

    @config.setter
    def config(self, config):
        """Sets the config of this PacketGenerator.


        :param config: The config of this PacketGenerator.  # noqa: E501
        :type: PacketGeneratorConfig
        """
        self._config = config

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
        if issubclass(PacketGenerator, dict):
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
        if not isinstance(other, PacketGenerator):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
