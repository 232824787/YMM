//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WLAppInfo : NSObject
{
    NSString *_pkg;
    NSString *_vc;
    NSString *_vn;
    NSString *_channel;
    long long _appClientId;
}

@property(nonatomic) long long appClientId; // @synthesize appClientId=_appClientId;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *vn; // @synthesize vn=_vn;
@property(copy, nonatomic) NSString *vc; // @synthesize vc=_vc;
@property(copy, nonatomic) NSString *pkg; // @synthesize pkg=_pkg;
- (void).cxx_destruct;

@end

