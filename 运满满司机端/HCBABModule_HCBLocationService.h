//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCBABModule.h"

@class NSString;

@interface HCBABModule_HCBLocationService : NSObject <HCBABModule>
{
    id <HCBABConfiguration> _configuration;
}

+ (void)load;
@property(readonly, nonatomic) id <HCBABConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)setupCompleted;
- (void)setup:(id)arg1;
- (void)updateLocation;
- (void)dealloc;
- (id)configurationName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

