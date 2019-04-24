//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDFileLogger.h"

@class DDLog, HCBMonitorConfigurationLogger;

@interface HCBMonitorLogger : DDFileLogger
{
    DDLog *_log;
    HCBMonitorConfigurationLogger *_configuration;
}

@property(retain, nonatomic) HCBMonitorConfigurationLogger *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)config:(id)arg1;
- (void)updateConfiguration;
- (void)log:(id)arg1;
- (id)setup;
- (id)initWithLogFileManager:(id)arg1;

@end

