//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YFMessage;

@interface YFResponseHandler : NSObject
{
    YFMessage *_holdModel;
    CDUnknownBlockType _processBlock;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType processBlock; // @synthesize processBlock=_processBlock;
@property(retain, nonatomic) YFMessage *holdModel; // @synthesize holdModel=_holdModel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHoldModel:(id)arg1 process:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end

