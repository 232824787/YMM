//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AlixPayResult : NSObject
{
    int _statusCode;
    NSString *_statusMessage;
    NSString *_resultString;
    NSString *_signString;
    NSString *_signType;
}

@property(readonly, nonatomic) NSString *signType; // @synthesize signType=_signType;
@property(readonly, nonatomic) NSString *signString; // @synthesize signString=_signString;
@property(readonly, nonatomic) NSString *resultString; // @synthesize resultString=_resultString;
@property(readonly, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (void)parseFormStr:(id)arg1;
- (id)description;
- (id)initWithString:(id)arg1;

@end

