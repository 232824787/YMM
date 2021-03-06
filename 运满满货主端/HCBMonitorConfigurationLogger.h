//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBMonitorConfigurationAbstract.h"

@interface HCBMonitorConfigurationLogger : HCBMonitorConfigurationAbstract
{
    double _rollingFrequency;
    unsigned long long _maximumNumberOfLogFiles;
    unsigned long long _maximumFileSize;
    unsigned long long _logFilesDiskQuota;
}

+ (id)defaultConfiguration_not_wifi;
+ (id)defaultConfiguration_wifi;
+ (id)defaultConfigurationWithNetworkStatus:(unsigned long long)arg1;
+ (id)defaultConfigurationForCurrentNetworkStatus;
+ (id)defaultConfiguration;
@property(nonatomic) unsigned long long logFilesDiskQuota; // @synthesize logFilesDiskQuota=_logFilesDiskQuota;
@property(nonatomic) unsigned long long maximumFileSize; // @synthesize maximumFileSize=_maximumFileSize;
@property(nonatomic) unsigned long long maximumNumberOfLogFiles; // @synthesize maximumNumberOfLogFiles=_maximumNumberOfLogFiles;
@property(nonatomic) double rollingFrequency; // @synthesize rollingFrequency=_rollingFrequency;

@end

