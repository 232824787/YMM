//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JYBlueObu : NSObject
{
    NSString *_name;
    NSString *_identify;
    NSString *_sn;
    NSString *_mac;
    long long _rssi;
}

@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(retain, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(retain, nonatomic) NSString *identify; // @synthesize identify=_identify;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end

