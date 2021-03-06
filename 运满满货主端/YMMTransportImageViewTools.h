//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, QSDispatchQueue;

@interface YMMTransportImageViewTools : NSObject
{
    QSDispatchQueue *_toolsQueue;
    NSObject<OS_dispatch_queue> *_diapatchQueue;
}

+ (id)shareTools;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *diapatchQueue; // @synthesize diapatchQueue=_diapatchQueue;
@property(retain, nonatomic) QSDispatchQueue *toolsQueue; // @synthesize toolsQueue=_toolsQueue;
- (void).cxx_destruct;
- (id)drawSuitableImage:(id)arg1 inSize:(struct CGSize)arg2;
- (void)resetImage:(id)arg1 size:(struct CGSize)arg2 complete:(CDUnknownBlockType)arg3;
- (id)init;

@end

