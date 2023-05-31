#pragma once
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

class BoxPlot{
    public:
    static double min(std::vector<double>);
    static double max(std::vector<double>);
    static double lq(std::vector<double>);
    static double uq(std::vector<double>);
    static double median(std::vector<double>);
    static double mean(std::vector<double>);
    static double stddev(std::vector<double>);
    static std::vector<double> out(std::vector<double>);
};

double BoxPlot::mean(std::vector<double> v){
    return std::accumulate(v.begin(), v.end(), 0.0)/v.size();
}

double BoxPlot::median(std::vector<double> v){
    std::sort(v.begin(), v.end());
    size_t size = v.size();
    if (size % 2 == 0){
        return (v[size/2] + v[size/2 - 1])/2;
    }
    else{
        return v[size/2];
    }
}

double BoxPlot::stddev(std::vector<double> v){
    double mean = BoxPlot::mean(v);
    double D = 0;
    for (auto s: v){
        D += (s - mean)*(s - mean);
    }
    return v.size() > 1 ? std::sqrt(D/(v.size() - 1)) : std::sqrt(D/(v.size()));
}

double BoxPlot::lq(std::vector<double> v){
    std::sort(v.begin(), v.end());
    return v[v.size()/4];
}

double BoxPlot::uq(std::vector<double> v){
    std::sort(v.begin(), v.end());
    return v[v.size()*3/4];
}

double BoxPlot::min(std::vector<double> v){
    return lq(v) - 1.5*(uq(v) - lq(v));
}

double BoxPlot::max(std::vector<double> v){
    return uq(v) + 1.5*(uq(v) - lq(v));
}

std::vector<double> BoxPlot::out(std::vector<double> v){
    std::vector<double> t;
    double l = min(v);
    double u = max(v);
    for (auto s: v){
        if (s < l || s > u)
            t.push_back(s);
    }
    return t;
}