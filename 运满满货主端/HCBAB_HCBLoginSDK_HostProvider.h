//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCBNetworkHostProvider.h"

@class NSString;

@interface HCBAB_HCBLoginSDK_HostProvider : NSObject <HCBNetworkHostProvider>
{
}

+ (id)sso;
+ (void)load;
- (_Bool)https:(id)arg1;
- (id)hostMapForEnv:(unsigned long long)arg1;
- (id)hostmap_pro;
- (id)hostmap_test;
- (id)hostmap_dev;
- (id)moduleName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

