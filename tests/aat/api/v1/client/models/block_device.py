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


class BlockDevice(object):
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
        'path': 'str',
        'size': 'int',
        'info': 'str',
        'usable': 'bool'
    }

    attribute_map = {
        'id': 'id',
        'path': 'path',
        'size': 'size',
        'info': 'info',
        'usable': 'usable'
    }

    def __init__(self, id=None, path=None, size=None, info=None, usable=None):  # noqa: E501
        """BlockDevice - a model defined in Swagger"""  # noqa: E501

        self._id = None
        self._path = None
        self._size = None
        self._info = None
        self._usable = None
        self.discriminator = None

        self.id = id
        self.path = path
        self.size = size
        self.info = info
        self.usable = usable

    @property
    def id(self):
        """Gets the id of this BlockDevice.  # noqa: E501

        Unique device identifier  # noqa: E501

        :return: The id of this BlockDevice.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BlockDevice.

        Unique device identifier  # noqa: E501

        :param id: The id of this BlockDevice.  # noqa: E501
        :type: str
        """
        self._id = id

    @property
    def path(self):
        """Gets the path of this BlockDevice.  # noqa: E501

        Resource pathname  # noqa: E501

        :return: The path of this BlockDevice.  # noqa: E501
        :rtype: str
        """
        return self._path

    @path.setter
    def path(self, path):
        """Sets the path of this BlockDevice.

        Resource pathname  # noqa: E501

        :param path: The path of this BlockDevice.  # noqa: E501
        :type: str
        """
        self._path = path

    @property
    def size(self):
        """Gets the size of this BlockDevice.  # noqa: E501

        Resource size (in bytes)  # noqa: E501

        :return: The size of this BlockDevice.  # noqa: E501
        :rtype: int
        """
        return self._size

    @size.setter
    def size(self, size):
        """Sets the size of this BlockDevice.

        Resource size (in bytes)  # noqa: E501

        :param size: The size of this BlockDevice.  # noqa: E501
        :type: int
        """
        self._size = size

    @property
    def info(self):
        """Gets the info of this BlockDevice.  # noqa: E501

        Any info related to the current block device  # noqa: E501

        :return: The info of this BlockDevice.  # noqa: E501
        :rtype: str
        """
        return self._info

    @info.setter
    def info(self, info):
        """Sets the info of this BlockDevice.

        Any info related to the current block device  # noqa: E501

        :param info: The info of this BlockDevice.  # noqa: E501
        :type: str
        """
        self._info = info

    @property
    def usable(self):
        """Gets the usable of this BlockDevice.  # noqa: E501

        Indicates whether it is safe to use this device for block I/O load generation  # noqa: E501

        :return: The usable of this BlockDevice.  # noqa: E501
        :rtype: bool
        """
        return self._usable

    @usable.setter
    def usable(self, usable):
        """Sets the usable of this BlockDevice.

        Indicates whether it is safe to use this device for block I/O load generation  # noqa: E501

        :param usable: The usable of this BlockDevice.  # noqa: E501
        :type: bool
        """
        self._usable = usable

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
        if issubclass(BlockDevice, dict):
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
        if not isinstance(other, BlockDevice):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other