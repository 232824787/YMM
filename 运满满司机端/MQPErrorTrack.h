//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MQPErrorTrack : NSObject
{
    NSString *_errorType;
    NSString *_errorCode;
    NSString *_errorDetail;
}

@property(copy, nonatomic) NSString *errorDetail; // @synthesize errorDetail=_errorDetail;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorType; // @synthesize errorType=_errorType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithError:(int)arg1 code:(id)arg2 description:(id)arg3;

@end

