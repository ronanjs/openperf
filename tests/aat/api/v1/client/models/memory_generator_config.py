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


class MemoryGeneratorConfig(object):
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
        'buffer_size': 'int',
        'reads_per_sec': 'int',
        'read_size': 'int',
        'read_threads': 'int',
        'writes_per_sec': 'int',
        'write_size': 'int',
        'write_threads': 'int',
        'pattern': 'str'
    }

    attribute_map = {
        'buffer_size': 'buffer_size',
        'reads_per_sec': 'reads_per_sec',
        'read_size': 'read_size',
        'read_threads': 'read_threads',
        'writes_per_sec': 'writes_per_sec',
        'write_size': 'write_size',
        'write_threads': 'write_threads',
        'pattern': 'pattern'
    }

    def __init__(self, buffer_size=None, reads_per_sec=None, read_size=None, read_threads=None, writes_per_sec=None, write_size=None, write_threads=None, pattern=None):  # noqa: E501
        """MemoryGeneratorConfig - a model defined in Swagger"""  # noqa: E501

        self._buffer_size = None
        self._reads_per_sec = None
        self._read_size = None
        self._read_threads = None
        self._writes_per_sec = None
        self._write_size = None
        self._write_threads = None
        self._pattern = None
        self.discriminator = None

        self.buffer_size = buffer_size
        self.reads_per_sec = reads_per_sec
        self.read_size = read_size
        self.read_threads = read_threads
        self.writes_per_sec = writes_per_sec
        self.write_size = write_size
        self.write_threads = write_threads
        self.pattern = pattern

    @property
    def buffer_size(self):
        """Gets the buffer_size of this MemoryGeneratorConfig.  # noqa: E501

        Memory size constraint. The buffer can never be larger than the value specified (in bytes)  # noqa: E501

        :return: The buffer_size of this MemoryGeneratorConfig.  # noqa: E501
        :rtype: int
        """
        return self._buffer_size

    @buffer_size.setter
    def buffer_size(self, buffer_size):
        """Sets the buffer_size of this MemoryGeneratorConfig.

        Memory size constraint. The buffer can never be larger than the value specified (in bytes)  # noqa: E501

        :param buffer_size: The buffer_size of this MemoryGeneratorConfig.  # noqa: E501
        :type: int
        """
        self._buffer_size = buffer_size

    @property
    def reads_per_sec(self):
        """Gets the reads_per_sec of this MemoryGeneratorConfig.  # noqa: E501

        Number of read operations to perform per second  # noqa: E501

        :return: The reads_per_sec of this MemoryGeneratorConfig.  # noqa: E501
        :rtype: int
        """
        return self._reads_per_sec

    @reads_per_sec.setter
    def reads_per_sec(self, reads_per_sec):
        """Sets the reads_per_sec of this MemoryGeneratorConfig.

        Number of read operations to perform per second  # noqa: E501

        :param reads_per_sec: The reads_per_sec of this MemoryGeneratorConfig.  # noqa: E501
        :type: int
        """
        self._reads_per_sec = reads_per_sec

    @property
    def read_size(self):
        """Gets the read_size of this MemoryGeneratorConfig.  # noqa: E501

        Number of bytes to use for each read operation  # noqa: E501

        :return: The read_size of this MemoryGeneratorConfig.  # noqa: E501
        :rtype: int
        """
        return self._read_size

    @read_size.setter
    def read_size(self, read_size):
        """Sets the read_size of this MemoryGeneratorConfig.

        Number of bytes to use for each read operation  # noqa: E501

        :param read_size: The read_size of this MemoryGeneratorConfig.  # noqa: E501
        :type: int
        """
        self._read_size = read_size

    @property
    def read_threads(self):
        """Gets the read_threads of this MemoryGeneratorConfig.  # noqa: E501

        Number of read worker threads  # noqa: E501

        :return: The read_threads of this MemoryGeneratorConfig.  # noqa: E501
        :rtype: int
        """
        return self._read_threads

    @read_threads.setter
    def read_threads(self, read_threads):
        """Sets the read_threads of this MemoryGeneratorConfig.

        Number of read worker threads  # noqa: E501

        :param read_threads: The read_threads of this MemoryGeneratorConfig.  # noqa: E501
        :type: int
        """
        self._read_threads = read_threads

    @property
    def writes_per_sec(self):
        """Gets the writes_per_sec of this MemoryGeneratorConfig.  # noqa: E501

        Number of write operations to perform per second  # noqa: E501

        :return: The writes_per_sec of this MemoryGeneratorConfig.  # noqa: E501
        :rtype: int
        """
        return self._writes_per_sec

    @writes_per_sec.setter
    def writes_per_sec(self, writes_per_sec):
        """Sets the writes_per_sec of this MemoryGeneratorConfig.

        Number of write operations to perform per second  # noqa: E501

        :param writes_per_sec: The writes_per_sec of this MemoryGeneratorConfig.  # noqa: E501
        :type: int
        """
        self._writes_per_sec = writes_per_sec

    @property
    def write_size(self):
        """Gets the write_size of this MemoryGeneratorConfig.  # noqa: E501

        Number of bytes to use for each write operation  # noqa: E501

        :return: The write_size of this MemoryGeneratorConfig.  # noqa: E501
        :rtype: int
        """
        return self._write_size

    @write_size.setter
    def write_size(self, write_size):
        """Sets the write_size of this MemoryGeneratorConfig.

        Number of bytes to use for each write operation  # noqa: E501

        :param write_size: The write_size of this MemoryGeneratorConfig.  # noqa: E501
        :type: int
        """
        self._write_size = write_size

    @property
    def write_threads(self):
        """Gets the write_threads of this MemoryGeneratorConfig.  # noqa: E501

        Number of write worker threads  # noqa: E501

        :return: The write_threads of this MemoryGeneratorConfig.  # noqa: E501
        :rtype: int
        """
        return self._write_threads

    @write_threads.setter
    def write_threads(self, write_threads):
        """Sets the write_threads of this MemoryGeneratorConfig.

        Number of write worker threads  # noqa: E501

        :param write_threads: The write_threads of this MemoryGeneratorConfig.  # noqa: E501
        :type: int
        """
        self._write_threads = write_threads

    @property
    def pattern(self):
        """Gets the pattern of this MemoryGeneratorConfig.  # noqa: E501

        IO access pattern  # noqa: E501

        :return: The pattern of this MemoryGeneratorConfig.  # noqa: E501
        :rtype: str
        """
        return self._pattern

    @pattern.setter
    def pattern(self, pattern):
        """Sets the pattern of this MemoryGeneratorConfig.

        IO access pattern  # noqa: E501

        :param pattern: The pattern of this MemoryGeneratorConfig.  # noqa: E501
        :type: str
        """
        self._pattern = pattern

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
        if issubclass(MemoryGeneratorConfig, dict):
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
        if not isinstance(other, MemoryGeneratorConfig):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
