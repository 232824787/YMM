//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JSONAPI : NSObject
{
    NSString *_baseURLString;
}

+ (void)rpc2WithMethodName:(id)arg1 andParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)rpcWithMethodName:(id)arg1 andArguments:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)__rpcRequestWithObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)postWithPath:(id)arg1 andParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getWithPath:(id)arg1 andParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)setContentType:(id)arg1;
+ (void)setAPIBaseURLWithString:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *baseURLString; // @synthesize baseURLString=_baseURLString;
- (void).cxx_destruct;

@end

