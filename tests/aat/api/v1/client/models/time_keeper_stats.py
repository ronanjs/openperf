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

from client.models.time_keeper_stats_round_trip_times import TimeKeeperStatsRoundTripTimes  # noqa: F401,E501


class TimeKeeperStats(object):
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
        'frequency_accept': 'float',
        'frequency_reject': 'float',
        'local_frequency_accept': 'float',
        'local_frequency_reject': 'float',
        'round_trip_times': 'TimeKeeperStatsRoundTripTimes',
        'theta_accept': 'float',
        'theta_reject': 'float',
        'timestamps': 'float'
    }

    attribute_map = {
        'frequency_accept': 'frequency_accept',
        'frequency_reject': 'frequency_reject',
        'local_frequency_accept': 'local_frequency_accept',
        'local_frequency_reject': 'local_frequency_reject',
        'round_trip_times': 'round_trip_times',
        'theta_accept': 'theta_accept',
        'theta_reject': 'theta_reject',
        'timestamps': 'timestamps'
    }

    def __init__(self, frequency_accept=None, frequency_reject=None, local_frequency_accept=None, local_frequency_reject=None, round_trip_times=None, theta_accept=None, theta_reject=None, timestamps=None):  # noqa: E501
        """TimeKeeperStats - a model defined in Swagger"""  # noqa: E501

        self._frequency_accept = None
        self._frequency_reject = None
        self._local_frequency_accept = None
        self._local_frequency_reject = None
        self._round_trip_times = None
        self._theta_accept = None
        self._theta_reject = None
        self._timestamps = None
        self.discriminator = None

        self.frequency_accept = frequency_accept
        self.frequency_reject = frequency_reject
        self.local_frequency_accept = local_frequency_accept
        self.local_frequency_reject = local_frequency_reject
        self.round_trip_times = round_trip_times
        self.theta_accept = theta_accept
        self.theta_reject = theta_reject
        self.timestamps = timestamps

    @property
    def frequency_accept(self):
        """Gets the frequency_accept of this TimeKeeperStats.  # noqa: E501

        The number of times the frequency calculation has been updated.  # noqa: E501

        :return: The frequency_accept of this TimeKeeperStats.  # noqa: E501
        :rtype: float
        """
        return self._frequency_accept

    @frequency_accept.setter
    def frequency_accept(self, frequency_accept):
        """Sets the frequency_accept of this TimeKeeperStats.

        The number of times the frequency calculation has been updated.  # noqa: E501

        :param frequency_accept: The frequency_accept of this TimeKeeperStats.  # noqa: E501
        :type: float
        """
        self._frequency_accept = frequency_accept

    @property
    def frequency_reject(self):
        """Gets the frequency_reject of this TimeKeeperStats.  # noqa: E501

        The number of times the frequency calculation has been rejected due to an excessive delta between old and new values.   # noqa: E501

        :return: The frequency_reject of this TimeKeeperStats.  # noqa: E501
        :rtype: float
        """
        return self._frequency_reject

    @frequency_reject.setter
    def frequency_reject(self, frequency_reject):
        """Sets the frequency_reject of this TimeKeeperStats.

        The number of times the frequency calculation has been rejected due to an excessive delta between old and new values.   # noqa: E501

        :param frequency_reject: The frequency_reject of this TimeKeeperStats.  # noqa: E501
        :type: float
        """
        self._frequency_reject = frequency_reject

    @property
    def local_frequency_accept(self):
        """Gets the local_frequency_accept of this TimeKeeperStats.  # noqa: E501

        The number of times the local frequency calculation has been updated.  # noqa: E501

        :return: The local_frequency_accept of this TimeKeeperStats.  # noqa: E501
        :rtype: float
        """
        return self._local_frequency_accept

    @local_frequency_accept.setter
    def local_frequency_accept(self, local_frequency_accept):
        """Sets the local_frequency_accept of this TimeKeeperStats.

        The number of times the local frequency calculation has been updated.  # noqa: E501

        :param local_frequency_accept: The local_frequency_accept of this TimeKeeperStats.  # noqa: E501
        :type: float
        """
        self._local_frequency_accept = local_frequency_accept

    @property
    def local_frequency_reject(self):
        """Gets the local_frequency_reject of this TimeKeeperStats.  # noqa: E501

        The number of times the local frequency calculation has been rejected due to an excessive delta between old and new values.   # noqa: E501

        :return: The local_frequency_reject of this TimeKeeperStats.  # noqa: E501
        :rtype: float
        """
        return self._local_frequency_reject

    @local_frequency_reject.setter
    def local_frequency_reject(self, local_frequency_reject):
        """Sets the local_frequency_reject of this TimeKeeperStats.

        The number of times the local frequency calculation has been rejected due to an excessive delta between old and new values.   # noqa: E501

        :param local_frequency_reject: The local_frequency_reject of this TimeKeeperStats.  # noqa: E501
        :type: float
        """
        self._local_frequency_reject = local_frequency_reject

    @property
    def round_trip_times(self):
        """Gets the round_trip_times of this TimeKeeperStats.  # noqa: E501


        :return: The round_trip_times of this TimeKeeperStats.  # noqa: E501
        :rtype: TimeKeeperStatsRoundTripTimes
        """
        return self._round_trip_times

    @round_trip_times.setter
    def round_trip_times(self, round_trip_times):
        """Sets the round_trip_times of this TimeKeeperStats.


        :param round_trip_times: The round_trip_times of this TimeKeeperStats.  # noqa: E501
        :type: TimeKeeperStatsRoundTripTimes
        """
        self._round_trip_times = round_trip_times

    @property
    def theta_accept(self):
        """Gets the theta_accept of this TimeKeeperStats.  # noqa: E501

        The number of times the theta calculation has been updated.  # noqa: E501

        :return: The theta_accept of this TimeKeeperStats.  # noqa: E501
        :rtype: float
        """
        return self._theta_accept

    @theta_accept.setter
    def theta_accept(self, theta_accept):
        """Sets the theta_accept of this TimeKeeperStats.

        The number of times the theta calculation has been updated.  # noqa: E501

        :param theta_accept: The theta_accept of this TimeKeeperStats.  # noqa: E501
        :type: float
        """
        self._theta_accept = theta_accept

    @property
    def theta_reject(self):
        """Gets the theta_reject of this TimeKeeperStats.  # noqa: E501

        Then umber of times the theta calculation has been rejected due to excessive delta between old and new values.   # noqa: E501

        :return: The theta_reject of this TimeKeeperStats.  # noqa: E501
        :rtype: float
        """
        return self._theta_reject

    @theta_reject.setter
    def theta_reject(self, theta_reject):
        """Sets the theta_reject of this TimeKeeperStats.

        Then umber of times the theta calculation has been rejected due to excessive delta between old and new values.   # noqa: E501

        :param theta_reject: The theta_reject of this TimeKeeperStats.  # noqa: E501
        :type: float
        """
        self._theta_reject = theta_reject

    @property
    def timestamps(self):
        """Gets the timestamps of this TimeKeeperStats.  # noqa: E501

        The number of timestamps in the current working set of timestamps.  # noqa: E501

        :return: The timestamps of this TimeKeeperStats.  # noqa: E501
        :rtype: float
        """
        return self._timestamps

    @timestamps.setter
    def timestamps(self, timestamps):
        """Sets the timestamps of this TimeKeeperStats.

        The number of timestamps in the current working set of timestamps.  # noqa: E501

        :param timestamps: The timestamps of this TimeKeeperStats.  # noqa: E501
        :type: float
        """
        self._timestamps = timestamps

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
        if not isinstance(other, TimeKeeperStats):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
