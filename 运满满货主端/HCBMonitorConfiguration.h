//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBMonitorConfigurationAbstract.h"

@interface HCBMonitorConfiguration : HCBMonitorConfigurationAbstract
{
    _Bool _debug;
    _Bool _enableUpload;
    _Bool _enableSample;
    unsigned long long _env;
}

@property(nonatomic) _Bool enableSample; // @synthesize enableSample=_enableSample;
@property(nonatomic) _Bool enableUpload; // @synthesize enableUpload=_enableUpload;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(nonatomic) unsigned long long env; // @synthesize env=_env;
- (id)init;

@end

