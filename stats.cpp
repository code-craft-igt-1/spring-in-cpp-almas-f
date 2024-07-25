#include "stats.h"
#include <cmath>

namespace Statistics
{
    Stats ComputeStatistics(const std::vector<double>& data)
    {
        Stats stats;

        if (data.empty())
        {
            stats.average = NAN;
            stats.min = NAN;
            stats.max = NAN;
        }
        else
        {
            double sum = 0;
            stats.min = data[0];
            stats.max = data[0];

            for (int i = 0; i < data.size(); i++)
            {
                sum += data[i];
                if (stats.max < data[i])
                {
                    stats.max = data[i];
                }

                if (stats.min > data[i])
                {
                    stats.min = data[i];
                }
            }
            stats.average = sum / data.size();
        }
        return stats;
    }
}
