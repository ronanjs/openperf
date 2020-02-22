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

from client.models.analyzer_protocol_counters import AnalyzerProtocolCounters  # noqa: F401,E501
from client.models.analyzer_stream_counters import AnalyzerStreamCounters  # noqa: F401,E501


class AnalyzerResult(object):
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
        'analyzer_id': 'str',
        'active': 'bool',
        'protocol_counters': 'AnalyzerProtocolCounters',
        'stream_counters': 'AnalyzerStreamCounters',
        'streams': 'list[str]'
    }

    attribute_map = {
        'id': 'id',
        'analyzer_id': 'analyzer_id',
        'active': 'active',
        'protocol_counters': 'protocol_counters',
        'stream_counters': 'stream_counters',
        'streams': 'streams'
    }

    def __init__(self, id=None, analyzer_id=None, active=None, protocol_counters=None, stream_counters=None, streams=None):  # noqa: E501
        """AnalyzerResult - a model defined in Swagger"""  # noqa: E501

        self._id = None
        self._analyzer_id = None
        self._active = None
        self._protocol_counters = None
        self._stream_counters = None
        self._streams = None
        self.discriminator = None

        self.id = id
        if analyzer_id is not None:
            self.analyzer_id = analyzer_id
        self.active = active
        self.protocol_counters = protocol_counters
        self.stream_counters = stream_counters
        self.streams = streams

    @property
    def id(self):
        """Gets the id of this AnalyzerResult.  # noqa: E501

        Unique analyzer result identifier  # noqa: E501

        :return: The id of this AnalyzerResult.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this AnalyzerResult.

        Unique analyzer result identifier  # noqa: E501

        :param id: The id of this AnalyzerResult.  # noqa: E501
        :type: str
        """
        self._id = id

    @property
    def analyzer_id(self):
        """Gets the analyzer_id of this AnalyzerResult.  # noqa: E501

        Unique analyzer identifier that generated this result  # noqa: E501

        :return: The analyzer_id of this AnalyzerResult.  # noqa: E501
        :rtype: str
        """
        return self._analyzer_id

    @analyzer_id.setter
    def analyzer_id(self, analyzer_id):
        """Sets the analyzer_id of this AnalyzerResult.

        Unique analyzer identifier that generated this result  # noqa: E501

        :param analyzer_id: The analyzer_id of this AnalyzerResult.  # noqa: E501
        :type: str
        """
        self._analyzer_id = analyzer_id

    @property
    def active(self):
        """Gets the active of this AnalyzerResult.  # noqa: E501

        Indicates whether the result is currently receiving updates  # noqa: E501

        :return: The active of this AnalyzerResult.  # noqa: E501
        :rtype: bool
        """
        return self._active

    @active.setter
    def active(self, active):
        """Sets the active of this AnalyzerResult.

        Indicates whether the result is currently receiving updates  # noqa: E501

        :param active: The active of this AnalyzerResult.  # noqa: E501
        :type: bool
        """
        self._active = active

    @property
    def protocol_counters(self):
        """Gets the protocol_counters of this AnalyzerResult.  # noqa: E501


        :return: The protocol_counters of this AnalyzerResult.  # noqa: E501
        :rtype: AnalyzerProtocolCounters
        """
        return self._protocol_counters

    @protocol_counters.setter
    def protocol_counters(self, protocol_counters):
        """Sets the protocol_counters of this AnalyzerResult.


        :param protocol_counters: The protocol_counters of this AnalyzerResult.  # noqa: E501
        :type: AnalyzerProtocolCounters
        """
        self._protocol_counters = protocol_counters

    @property
    def stream_counters(self):
        """Gets the stream_counters of this AnalyzerResult.  # noqa: E501


        :return: The stream_counters of this AnalyzerResult.  # noqa: E501
        :rtype: AnalyzerStreamCounters
        """
        return self._stream_counters

    @stream_counters.setter
    def stream_counters(self, stream_counters):
        """Sets the stream_counters of this AnalyzerResult.


        :param stream_counters: The stream_counters of this AnalyzerResult.  # noqa: E501
        :type: AnalyzerStreamCounters
        """
        self._stream_counters = stream_counters

    @property
    def streams(self):
        """Gets the streams of this AnalyzerResult.  # noqa: E501

        List of unique stream ids included in stats. Individual stream statistics may be queried via the `rx-streams` endpoint.   # noqa: E501

        :return: The streams of this AnalyzerResult.  # noqa: E501
        :rtype: list[str]
        """
        return self._streams

    @streams.setter
    def streams(self, streams):
        """Sets the streams of this AnalyzerResult.

        List of unique stream ids included in stats. Individual stream statistics may be queried via the `rx-streams` endpoint.   # noqa: E501

        :param streams: The streams of this AnalyzerResult.  # noqa: E501
        :type: list[str]
        """
        self._streams = streams

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
        if not isinstance(other, AnalyzerResult):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other