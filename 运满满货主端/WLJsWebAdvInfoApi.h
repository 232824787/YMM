//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WLJsBridgeApi.h"

@class NSString;

@interface WLJsWebAdvInfoApi : WLJsBridgeApi
{
    NSString *_adv_id;
    NSString *_type;
}

+ (id)parseToApi:(id)arg1;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *adv_id; // @synthesize adv_id=_adv_id;
- (void).cxx_destruct;

@end

