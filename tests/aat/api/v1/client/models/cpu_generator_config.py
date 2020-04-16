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


class CpuGeneratorConfig(object):
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
        'cores': 'list[CpuGeneratorCoreConfig]'
    }

    attribute_map = {
        'cores': 'cores'
    }

    def __init__(self, cores=None):  # noqa: E501
        """CpuGeneratorConfig - a model defined in Swagger"""  # noqa: E501

        self._cores = None
        self.discriminator = None

        if cores is not None:
            self.cores = cores

    @property
    def cores(self):
        """Gets the cores of this CpuGeneratorConfig.  # noqa: E501


        :return: The cores of this CpuGeneratorConfig.  # noqa: E501
        :rtype: list[CpuGeneratorCoreConfig]
        """
        return self._cores

    @cores.setter
    def cores(self, cores):
        """Sets the cores of this CpuGeneratorConfig.


        :param cores: The cores of this CpuGeneratorConfig.  # noqa: E501
        :type: list[CpuGeneratorCoreConfig]
        """
        self._cores = cores

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
        if issubclass(CpuGeneratorConfig, dict):
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
        if not isinstance(other, CpuGeneratorConfig):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
